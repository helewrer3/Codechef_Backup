/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;
vector<ll> arr;

void Input(){
    cin >> N >> K, arr.clear(), arr.resize(N);

    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll ans = arr[N-1];

    for(ll i = 0; i < N; i++){
        if(i + K < N)
            arr[i] += arr[i+K];
        ans = max(ans, arr[i]);
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