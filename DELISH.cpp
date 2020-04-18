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

ll N;
ll arr[size], lmn[size], lmx[size], rmn[size], rmx[size];

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
	lmx[0] = lmn[0] = arr[0];
	rmx[N - 1] = rmn[N - 1] = arr[N - 1];
}

void Solve() {
	ll ans = -inf;
	for (ll i = 1; i < N; i++) {
		lmx[i] = max(lmx[i - 1] + arr[i], arr[i]);
		lmn[i] = min(lmn[i - 1] + arr[i], arr[i]);
	}
	for (ll i = N - 2; i >= 0; i--) {
		rmx[i] = max(rmx[i + 1] + arr[i], arr[i]);
		rmn[i] = min(rmn[i + 1] + arr[i], arr[i]);
	}

	for (ll i = 0; i < N - 1; i++) {
		ans = max(ans, abs(lmx[i] - rmx[i + 1]));
		ans = max(ans, abs(lmx[i] - rmn[i + 1]));
		ans = max(ans, abs(lmn[i] - rmx[i + 1]));
		ans = max(ans, abs(lmn[i] - rmn[i + 1]));
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	while (T--) {
		Input();
		Solve();
	}
	return 0;
}