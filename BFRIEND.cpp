/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, a, b, c;
vector<ll> floors;

void Input(){
    cin >> n >> a >> b >> c;
    floors.clear();
    floors.resize(n);
    for(auto &z:floors)
        cin >> z;
}

void Solve(){
    ll ans = INT_MAX;

    for(ll i = 0; i < n; i++){
        ans = min(ans, abs(a - floors[i]) + abs(b - floors[i]));
    }

    cout << ans + c << endl;
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