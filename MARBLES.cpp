/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;

void Input(){
    cin >> N >> K; N -= K;
}

void Solve(){
    ll ans = 1;

    if(N != 0){
        for(ll i = (N + 1); i < (N + K); i++){
            ans *= i;
            ans /= (i-N);
        }
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