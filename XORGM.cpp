/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, xor_val;
vector<ll> A, B, C;
map<ll, ll> mp_B;

void Input(){
    cin >> N; A.clear(), B.clear(), A.resize(N), B.resize(N), xor_val = 0, C.clear(), C.resize(N), mp_B.clear();
    for(auto &z:A)
        cin >> z;
    for(auto &z:B){
        cin >> z;
        mp_B[z]++;
    }
    for(ll i = 0; i < N; i++){
        xor_val = xor_val^A[i]^B[i];
    }
    for(ll i = 0; i < N; i++)
        C[i] = xor_val^A[i];
}

void Solve(){

    for(ll i = 0; i < N; i++){
        mp_B[C[i]]--;
        if(mp_B[C[i]] < 0){
            cout << -1 << endl;
            return;
        }
    }

    for(ll i = 0; i < N; i++){
        if(mp_B[B[i]] != 0){
            cout << -1 << endl;
            return;
        }
    }

    for(ll i = 0; i < N; i++)
        cout << C[i] << " ";
    
    cout << endl;

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