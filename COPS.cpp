/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll m, x, y;
vector<ll> arr;
map<ll, bool> mp;

void Input(){
    cin >> m >> x >> y, arr.clear(), arr.resize(m), mp.clear();
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll ans = 0;
    x *= y;

    for(ll i = 0; i < m; i++){
        for(ll j = arr[i] - x; j <= arr[i] + x; j++)
            mp[j] = true;
    }

    for(ll i = 1; i <= 100; i++){
        if(!mp.count(i))
            ans++;
    }

    cout << ans << "\n";
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