/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;
vector<ll> P_arr;
vector<ll> F_arr;

void Input(){
    cin >> N >> M;
    P_arr.clear(); P_arr.resize(N);
    F_arr.clear(); F_arr.resize(N);

    for(auto &z: F_arr)
        cin >> z;
    for(auto &z: P_arr)
        cin >> z;
}

void Solve(){
    map<ll, ll> mp;
    for(ll i = 0; i < N; i++){
        mp[F_arr[i]] += P_arr[i];
    }
    ll ans = INT_MAX;
    for(auto it:mp){
        ans = min(ans, it.second);
    }
    cout << ans << endl;
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