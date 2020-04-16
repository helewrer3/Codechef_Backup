/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> arr;
map<ll, ll> arr_max;

void Input(){
    cin >> N >> Q, arr.clear(), arr_max.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    arr_max[-1] = INT_MIN;
    arr_max[0] = arr[0];
    for(ll i = 1; i < N; i++){
        arr_max[i] = max(arr_max[i-1], arr[i]);
    }
}

void Solve(){
    while(Q--){
        ll d;
        cin >> d;
        cout << arr_max[d-1] << "\n";
    }
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