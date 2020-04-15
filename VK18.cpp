/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
map<ll, ll> mp_pref, mp_dp;

ll Fun(ll x){
    ll o = 0, e = 0;
    while(x > 0){
        if((x%10)%2 == 0)
            e += x%10;
        else
            o += x%10;
        x /= 10;
    }
    return abs( o- e);
}

void Input(){
    cin >> N;
}

void Solve(){
    cout << mp_dp[N] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(ll i = 1; i <= 2000000; i++)
        mp_pref[i] = mp_pref[i-1] + Fun(i);
    for(ll i = 1; i <= 1000000; i++)
        mp_dp[i] = mp_dp[i-1] + 2*(mp_pref[2*i-1] - mp_pref[i]) + mp_pref[2*i];


    ll T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}