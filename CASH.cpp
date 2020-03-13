/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, k;
vector<ll> arr;

void Input(){
    cin >> n >> k;
    arr.clear();
    arr.resize(n);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    vector<ll> takenout_arr;
    ll tobeadded_sum = 0;

    for(ll i = 0; i < n; i++){
        takenout_arr.push_back(arr[i] - (arr[i]/k)*k);
        tobeadded_sum +=  k - (arr[i] - (arr[i]/k)*k);
    }

    ll c = 0;
    ll temp_sum = 0;
    for(c = -1; c < n; c++){
        if(c == -1){

        }
        else{
            temp_sum += takenout_arr[c];
            tobeadded_sum -= (k - takenout_arr[c]);
        }

        if(temp_sum >= tobeadded_sum){
            cout << temp_sum - tobeadded_sum << endl;
            return;
        }
    }

    cout << temp_sum << endl;
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