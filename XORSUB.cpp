
// Problem : XOR with Subset
// Contest : CodeChef - Practice(Easy)
// URL : https://www.codechef.com/problems/XORSUB
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

ll N, K;
vector<ll> arr;
map<ll, ll> dp; 

void Fun(){
    ll ans = INT_MIN;
    dp[0] = 1;
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j <= 1023; j++){
            if(dp[j] == 1)
                dp[j^arr[i]] = 1;
        }
    }
    
    for(ll i = 0; i <= 1023; i++){
        if(dp[i] == 1)
            ans = max(ans, i^K);
    }
    
    cout << ans << "\n";
}

void Input(){
    cin >> N >> K, arr.clear(), arr.resize(N), dp.clear();
    for(ll i = 0; i < N; i++)
        cin >> arr[i];
}

void Solve(){
    Fun();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}