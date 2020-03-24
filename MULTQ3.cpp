/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> arr_tree, arr_lazy, arr_input;

void BuildTree(ll node, ll st, ll ed){
    if(st == ed){
        arr_tree[node] = 1;
    }
    ll mid = st + (ed-st)/2;
    BuildTree(2*node, st, mid), BuildTree(2*node+1, mid+1, ed);
    arr_tree[node] = arr_tree[2*node] + arr_tree[2*node+1];
}

void UpdateTree(ll node, ll val, ll l, ll r, ll st, ll ed){
    if(l > ed or r < st)
        return;
    
    if(arr_lazy[node]){
        
    }

    if(l <= st or r >= ed){

    } 
}

void Input(){

}

void Solve(){

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