/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;
string str;

class graph{
    private:
        unordered_map<ll, list<ll> > adj_list;
        unordered_map<ll, bool> mp_visited;
        unordered_map<ll, ll> mp_dist;
        queue<ll> Q;
    public:
        void AddEdge(ll u, ll v);
        void Build(ll u, string str);
        ll BFSTrav(ll src);
} G, new_G;

void graph::AddEdge(ll u, ll v){
    adj_list[u].push_back(v);
    return;
}

void graph::Build(ll u, string str){
    for(ll i = 0; i < str.size(); i++){
        if((str[i] - '0') == 1)
            AddEdge(u, i+1);
    }
}

ll graph::BFSTrav(ll src){
    Q.push(src);
    for(auto it:adj_list)
        mp_dist[it.first] = INT_MAX;
    mp_dist[src] = 0;
    
    while(!Q.empty()){
        ll top = Q.front();
        Q.pop();
        mp_visited[top] = true;
        for(auto it:adj_list[top]){
            if(!mp_visited[it] and abs(it - top) <= K){
                mp_visited[it] = true;
                mp_dist[it] = min(mp_dist[top] + 1, mp_dist[it]);
                Q.push(it);
            }
        }
    }

    if(mp_dist[N] == INT_MAX)
        mp_dist[N] = -1;

    return mp_dist[N];
}

void Input(){
    cin >> N >> K, G = new_G;
    for(ll i = 1; i <= N; i++){
        cin >> str;
        G.Build(i, str);
    }
}

void Solve(){
    cout << G.BFSTrav(1ll) << "\n";
    return;
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