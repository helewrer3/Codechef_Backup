/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll i = 0;
    for(i; i < N; i++){
        if(arr[i] == 1){
            break;
        }
    }

    for(i; i < N; i++){
        if(arr[i] == 1){
            for(ll j = i+1; j <= min(N-1, i+5); j++){
                if(arr[j] == 1){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
    return;

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