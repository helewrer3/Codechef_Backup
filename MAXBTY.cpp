/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

struct data{
    ll sum, pref_sum, suff_sum, ans;
};

data make_data(ll val){
    data res;
    res.sum = val;
    res.ans = res.pref_sum = res.suff_sum = max(0ll, val);
    return res;
}

ll N, Q, idx, x, l, r;
vector<ll> arr_input;
vector<data> arr_tree;

data Combine(data a, data b){
    data res;
    res.sum = a.sum + b.sum;
    res.pref_sum = max(a.pref_sum, a.sum + b.pref_sum);
    res.suff_sum = max(b.suff_sum, b.sum + a.suff_sum);
    res.ans = max(max(a.ans, b.ans), a.suff_sum + b.pref_sum);
    return res;
}


void BuildTree(ll node, ll st, ll ed){
    if(st == ed){
        arr_tree[node] = make_data(arr_input[st]);
        return;
    }

    ll mid = st + (ed - st)/2;

    BuildTree(2*node, st, mid), BuildTree(2*node+1, mid+1, ed);
    arr_tree[node] = Combine(arr_tree[2*node], arr_tree[2*node+1]);
}

void UpdateTree(ll idx, ll x, ll node, ll st, ll ed){
    if(st == ed){
        arr_input[st] = x;
        arr_tree[node] = make_data(arr_input[st]);
        return;
    }

    ll mid = st + (ed - st)/2;

    if(idx <= mid)
        UpdateTree(idx, x, 2*node, st, mid);
    else
        UpdateTree(idx, x, 2*node+1, mid+1, ed);

    arr_tree[node] = Combine(arr_tree[2*node], arr_tree[2*node+1]);
}

data QueryTree(ll l, ll r, ll node, ll st, ll ed){
    if(l > ed or r < st)
        return make_data(0);
    
    if(l <= st and r >= ed)
        return arr_tree[node];
    
    ll mid = st + (ed-st)/2;
    
    return Combine(QueryTree(l, r, 2*node, st, mid), QueryTree(l, r, 2*node+1, mid+1, ed));

}   

void Input(){
    cin >> N >> Q, arr_input.clear(), arr_input.resize(N), arr_tree.clear(), arr_tree.resize(4*N);
    for(auto &z:arr_input)
        cin >> z;
    BuildTree(1, 0, N-1);
}

void Solve(){
    while(Q--){
        char type;
        cin >> type;
        if(type == 'U'){
            cin >> idx >> x, idx--;
            UpdateTree(idx, x, 1, 0, N-1);
        }
        else{
            cin >> l >> r, l--, r--;
            data L = QueryTree(0, l-1, 1, 0, N-1);
            data LR = QueryTree(l, r, 1, 0, N-1);
            data R = QueryTree(r+1, N-1, 1, 0, N-1);
            cout << L.suff_sum + LR.sum + R.pref_sum << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}