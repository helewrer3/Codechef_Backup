/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<string> arr_str;
map<ll, bool> mp_frens;

class graph{
    private:
        map<ll, list<ll> > adj_list;
    public:
        void AddEdge(ll u, ll v){
            adj_list[u].push_back(v), adj_list[v].push_back(u);
        }
        void SearchFrens(ll u);
} G;

void graph::SearchFrens(ll u){
    for(auto it:adj_list[u])
        mp_frens[it] = true;
}

void Input(){
    cin >> N, arr_str.clear(), arr_str.resize(N);
    for(auto &z:arr_str)
        cin >> z;
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < arr_str[i].size(); j++){
            if(arr_str[i][j] == '1')
                G.AddEdge(i+1, j+1);
        }
    }

    for(ll i = 0; i < N; i++){
        mp_frens.clear();
        for(ll j = 0; j < arr_str[i].size(); j++){
            if(arr_str[i][j] == '1')
                G.SearchFrens(j+1);
        }
        for(ll j = 0; j < arr_str[i].size(); j++){
            if(arr_str[i][j] == '0' and mp_frens[j+1] and j != i)
                ans++;
        }
    }

    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}