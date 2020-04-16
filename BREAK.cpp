/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, S;
vector<ll> arr_atk;
vector<ll> arr_def;
map<ll, ll> mp;

void Input(){
    cin >> N;
    arr_atk.clear(); arr_def.clear(); mp.clear();
    arr_atk.resize(N); arr_def.resize(N);

    for(auto &z:arr_atk){
        cin >> z;
    }
    for(auto &z:arr_def){
        cin >> z;
    }
    sort(arr_atk.begin(), arr_atk.end());
    sort(arr_def.begin(), arr_def.end());
}

void Solve(){

    if(S == 2){
        cout << "YES\n";
        return;
    }

    for(ll i = 0; i < N; i++){
        if(arr_def[i] <= arr_atk[i]){
            cout << "NO\n";
            return;
        }
    }

    mp[arr_atk[0]]++;mp[arr_def[0]]++;

    for(ll i = 1; i < N; i++){
        if(!mp.count(arr_atk[i])){
            cout << "NO\n";
            return;
        }
        mp[arr_atk[i]]++;mp[arr_def[i]]++;
    }

    cout << "YES\n";
    return; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T >> S;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}