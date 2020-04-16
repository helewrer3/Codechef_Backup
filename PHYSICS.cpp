/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, F;
vector<ll> arr;
map<ll, ll> mp;

void Input(){
    cin >> N >> F, arr.clear(), arr.resize(N), mp.clear();
    for(auto &z:arr)
    	cin >> z;
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        ll K = arr[i];
        while(K%F == 0){
            K /= F;
        }
        mp[K]++;
    }

    for(auto it:mp){
        ans += it.second*(it.second-1)/2;
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