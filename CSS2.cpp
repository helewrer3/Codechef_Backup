/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
map<ll, map<ll, pair<ll, ll> > > mp;

void Input(){
    cin >> N >> Q;
    while(N--){
        ll id, val, attr, priority;
        cin >> id >> attr >> val >> priority;
        if(!mp.count(id) or !mp[id].count(attr)){
            mp[id][attr] = make_pair(val, priority);
        }
        else{
            if(mp[id][attr].second < priority){
                mp[id][attr] = make_pair(val, priority);
            }
        }
    }

}

void Solve(){
    while(Q--){
        ll id, attr;
        cin >> id >> attr;
        cout << mp[id][attr].first << "\n";
    }
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