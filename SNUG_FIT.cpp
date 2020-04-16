/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
vector<ll> a_arr;
vector<ll> b_arr;

void Input(){
    cin >> n;
    a_arr.clear();
    b_arr.clear();
    a_arr.resize(n);
    b_arr.resize(n);

    for(auto &z:a_arr)
        cin >> z;
    
    for(auto &z:b_arr)
        cin >> z;
}

void Solve(){
    sort(a_arr.begin(), a_arr.end());
    sort(b_arr.begin(), b_arr.end());
    ll ans = 0;

    for(ll i = 0; i < n; i++){
        ans += min(a_arr[i], b_arr[i]);
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