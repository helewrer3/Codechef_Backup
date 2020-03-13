/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, p;
vector<ll> arr;
map<ll, ll> ans_arr;
map<map<ll, ll>, ll> dp;

void Input(){
    cin >> n >> p;
    arr.clear();
    ans_arr.clear();
    arr.resize(n);
    dp.clear();
    for(auto &z:arr)
        cin >> z;
}

bool isOverPay(){
    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            if(arr[j]%arr[i] > 0){
                return true;
            }
        }
    }

    return (p%arr[arr.size()-1]);
}

void GetCombo(ll sum, map<ll, ll> temp_arr, ll ptr){

    if(sum > p){
        for(ll i = 0; i < n; i++){
            if(temp_arr[i]){
                if(sum - arr[i] >= p){
                    return;
                }
            }
        }

        for(ll i = 0; i < n; i++){
            ans_arr[i] = temp_arr[i];
        }

        return;
    }
    else if(sum == p or ptr >= n){
        return;
    }

    GetCombo(sum, temp_arr, ptr+1);
    temp_arr[ptr]++;
    GetCombo(sum + arr[ptr], temp_arr, ptr+1);
    GetCombo(sum + arr[ptr], temp_arr, ptr);

}

void Solve(){
    sort(arr.begin(), arr.end());
    map<ll, ll> temp_arr;

    if(isOverPay()){
        cout << "YES ";
        for(ll i = 0; i < n; i++){
            if(p%arr[i]){
                ans_arr[i] = p/arr[i] + 1;
                for(ll j = 0; j < n; j++){
                	cout << ans_arr[j] << " ";
                }
                cout << endl;
                return;
            }
        }

        GetCombo(0, temp_arr, 0);

        for(ll i = 0; i < n; i++){
            cout << ans_arr[i] << " ";
        }

        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }

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