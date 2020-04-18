/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define f first
#define s second
#define inf INT_MAX
#define size 10000000
#define mem(a,val) memset(a,val,sizeof(a))

using namespace std;

ll N, mx;
ll dp[size], arr_f[size], arr_h[size];

void Input(){
    cin >> N, mx = -inf;
    for(ll i = 0; i < N; i++){
        cin >> arr_h[i];
        mx = max(mx, 2*arr_h[i]);
    }

    for(ll i = 0; i < N; i++)
    	cin >> arr_f[i];

    for(ll i = 0; i <= mx; i++)
    	dp[i] = inf;

    dp[0] = 0;
}

void Solve(){
	for(ll i = 0; i < N; i++){
		for(ll j = 0; j+arr_f[i] <= mx; j++){
			dp[j+arr_f[i]] = min(dp[j+arr_f[i]], 1+dp[j]);
		}
	}

	ll res = 0;

	for(ll i = 0; i < N; i++){
		res += dp[2*arr_h[i]];
	}

	cout << res << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ll T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}