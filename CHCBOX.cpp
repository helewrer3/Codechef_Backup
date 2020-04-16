/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr, arr_pos;

void Input(){
    cin >> N, arr.clear(), arr.resize(N), arr_pos.clear();
    for(auto &z:arr)
        cin >> z;
}
void Solve(){
    ll max_ele = INT_MIN, ans = 0;
    for(ll i = 0; i < N; i++)
        max_ele = max(max_ele, arr[i]);

    for(ll i = 0; i < N; i++){
        if(arr[i] == max_ele)
            arr_pos.push_back(i);
    }
    arr_pos.push_back(arr_pos[0] + N);

    for(ll i = 1; i < arr_pos.size(); i++){
        ans += max(0ll, arr_pos[i] - arr_pos[i-1] - N/2);
    }

    cout << ans << endl;
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