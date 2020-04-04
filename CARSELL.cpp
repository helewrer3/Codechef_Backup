/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

bool MyComp(ll a, ll b){
    return a > b;
}

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(arr.begin(), arr.end(), MyComp);
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        ans += max(0ll, arr[i] - i);
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