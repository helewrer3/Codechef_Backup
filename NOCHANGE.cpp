/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, P;
vector <ll> arr;

void Input(){
    cin >> N >> P;
    arr.clear(); arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){

    for(ll i = 0; i < N; i++){
        if(P%arr[i] != 0){
            cout << "YES\n";
            for(ll j = 0; j < N; j++){
                if(j == i)
                    cout << P/arr[i] + 1 << " ";
                else
                    cout << "0 ";
            }
            cout << "\n";
            return;
        }
    }

    for(ll i = 0; i < N-1; i++){
        if(arr[i+1]%arr[i] != 0){
            cout << "YES\n";
            for(ll j = 0; j < N; j++){
                if(j == i)
                    cout << (P - arr[i+1])/arr[i] + 1 << " ";
                else if(j == i+1)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << "\n";
            return;
        }
    }

    cout << "NO\n";

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