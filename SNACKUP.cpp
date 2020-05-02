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
#define size_1d 10000000
#define size_2d 10000
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N;
vector<pll> arr;

void Input() {
	cin >> N, arr.clear();
	for (ll i = 1; i < N; i++)
		arr.push_back({i, i + 1});
	arr.push_back({N, 1});
}

void Solve() {
	cout << arr.size() << endl;
	for (ll i = 0 ; i < N; i++) {
		cout << N << endl;
		ll pos = i;
		for (ll j = 0; j < N; j++) {
			cout << j + 1 << " " << arr[pos].f << " " << arr[pos].s << endl;
			pos++;
			pos %= N;
		}
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
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}