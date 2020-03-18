/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;
vector<ll> arr;

void Input(){
    cin >> N >> K;
    arr.clear(); arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    K--;
}

void Solve(){
    ll temp, cnt_zero = 0;
    while(K--){
        for(ll i = 0; i < N; i++){
            cin >> temp;
            if(arr[i] != temp)
                arr[i] = 0;
        }
    }
    for(ll i = 0; i < N; i++){
        if(arr[i]){
            ll j = i+1;
            for(j; j < N; j++){
                if(arr[j] != 0){
                    arr[i] = arr[j];
                    break;
                }
            }
            if(j == N){
                arr[i] = 0;
            }
        }
    }
    for(ll i = 0; i < N; i++){
        if(arr[i] == 0)
            cnt_zero++;
    }

    cout << cnt_zero << "\n";
    for(ll i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
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