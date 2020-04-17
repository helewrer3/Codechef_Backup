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
#define mem(a,val) memset(a,val,sizeof(a))

using namespace std;

ll N, x, y;
vector<pll> arr;

bool MC(pll p1, pll p2){
	return abs(p1.f - p1.s) > abs(p2.f - p2.s);
}

void Input(){
    cin >> N >> x >> y, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z.f;
    for(auto &z:arr)
        cin >> z.s;
    sort(all(arr), MC);
}

void Solve(){
	ll ans = 0;
	for(ll i = 0; i < N; i++){
		if(arr[i].f > arr[i].s){
			if(x){
				ans += arr[i].f;
				x--;
			}
			else{
				ans += arr[i].s;
				y--;
			}
		}
		else{
			if(y){
				ans += arr[i].s;
				y--;
			}
			else{
				ans += arr[i].f;
				x--;
			}
		}
	}

	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}