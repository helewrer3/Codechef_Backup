/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, ans;
vector<ll> arr;
map<ll, ll> mp;

void Input(){
    cin >> N, mp.clear(), arr.clear(), arr.resize(N), ans = INT_MIN;

    for(auto &z:arr){
        cin >> z;
        mp[z]++;
    }
}

void Solve(){
    for(auto it:mp)
        ans = max(ans, it.second);
        
    cout << N - ans << endl;
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