/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
map<ll, ll> mp_prod;

void Input(){
    cin >> N, arr.clear(), arr.resize(N), mp_prod.clear();
    for(auto &z:arr)
        cin >> z;
    mp_prod[-1] = 1;
    for(ll i = 0; i < N; i++)
        mp_prod[i] = mp_prod[i-1]*arr[i];
}

void Solve(){
    ll ans = 0;
    //Brute force
    for(ll i = 0; i < N; i++){
        for(ll j = i; j < N; j++){
            if(((mp_prod[j]/mp_prod[i-1])%2 != 0) or ((mp_prod[j]/mp_prod[i-1])%4 == 0)){
                ans++;
            }
        }
    }
    //Brute force

    //2 Pointer
    //2 Pointer
    
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