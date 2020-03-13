/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h> 
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> arr;
vector<ll> arr_P;
map<string, ll> mp;

void Input(){
    cin >> N >> Q;
    arr.clear(); arr_P.clear();
    arr.resize(N); arr_P.resize(Q);
    mp.clear();
    for(auto &z:arr){
        cin >> z;
        if(__builtin_parityll(z))
            mp["odd"]++;
        else
            mp["even"]++;
    }
    for(auto &z:arr_P)
        cin >> z;
}

void Solve(){
    for(ll i = 0; i < Q; i++){
        ll odd = 0, even = 0;
        if(__builtin_parityll(arr_P[i])){
            odd += mp["even"];
            even += mp["odd"];
        }
        else{
            odd += mp["odd"];
            even += mp["even"];
        }
        cout << even << " " << odd << "\n";
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