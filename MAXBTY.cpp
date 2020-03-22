/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q, idx, x, l, r;
vector<ll> arr_input, arr_tree;

void buildTree(ll node, ll st, ll ed){
    ll mid = st + (ed-st)/2;
    if(st == ed){
        arr_tree[node] = arr_input[st];
    }
    else{
        buildTree(2*node, st, mid);
        buildTree(2*node+1, mid+1, ed);
        arr_tree[node] = arr_tree[2*node] + arr_tree[2*node + 1]; //Perform operation asked in the question here
    }
    return;
}

void updateTree(ll idx, ll x, ll node, ll st, ll ed){
    ll mid = st + (ed - st)/2;
    if(st == ed){
        arr_input[node] = x;
        arr_tree[idx] = x;
    }
    else{
        if(idx <= mid)
            updateTree(idx, x, 2*node, st, mid);
        else
            updateTree(idx, x, 2*node+1, mid+1, ed);

        arr_tree[node] =  arr_tree[2*node] + arr_tree[2*node+1]; //Perform operation asked in the question here
    }
    return;
}

ll queryTree(ll l, ll r, ll node, ll st, ll ed){
    ll mid = st + (ed-st)/2;

    if(r < st or l > ed){
        return 0;
    }
    else if(l <= st and r >= ed)
        return arr_tree[node];
    
    ll p1 = queryTree(l, r, 2*node, st, mid);
    ll p2 = queryTree(l, r, 2*node+1, mid+1, ed);
    return (p1 + p2); //Perform operation asked in the question here
}   

void Input(){
    cin >> N >> Q, arr_input.clear(), arr_input.resize(N), arr_tree.clear(), arr_tree.resize(4*N);
    for(auto &z:arr_input)
        cin >> z;
    buildTree(1, 0, N-1);
}

void Solve(){
    while(Q--){
        char type;
        cin >> type;
        if(type == 'U'){
            cin >> idx >> x, idx--;
            updateTree(idx, x, 1, 0, N-1);
        }
        else{
            cin >> l >> r, l--, r--;
            cout << queryTree(l, r, 1, 0, N-1);
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