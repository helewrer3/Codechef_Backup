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
    ll P = 0;
    
    for(ll i = 0; i < N; i++){
        P += (arr[i] - K);

        if(P < 0){
            cout << "NO " << i+1 << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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