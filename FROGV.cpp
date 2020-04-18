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

ll N, K, P;
pll arr[size];
ll dst[size];

bool MC(pll a, pll b) {
	return a.f > b.f;
}

void Input() {
	cin >> N >> K >> P;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i].f;
		arr[i].s = i;
	}
	sort(arr, arr + N, MC);
}

void Solve() {
	dst[arr[0].s] = arr[0].f + K;
	for (ll i = 1; i < N; i++) {
		if (arr[i - 1].f - arr[i].f <= K)
			dst[arr[i].s] = dst[arr[i - 1].s];
		else
			dst[arr[i].s] = arr[i].f + K;
	}
	while (P--) {
		ll u, v;
		cin >> u >> v;
		u--, v--;
		if (dst[u] == dst[v])
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	while (T--) {
		Input();
		Solve();
	}
	return 0;
}