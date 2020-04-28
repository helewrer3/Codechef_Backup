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

ll N, S;
ll arr_p[size_1d], arr_t[size_1d];

void Input() {
	cin >> N >> S;
	for (ll i = 0; i < N; i++)
		cin >> arr_p[i];
	for (ll i = 0; i < N; i++)
		cin >> arr_t[i];
}

void Solve() {
	ll mn_d = inf, mn_f = inf;

	for (ll i = 0; i < N; i++) {
		if (arr_t[i] == 1)
			mn_d = min(mn_d, arr_p[i]);
		else
			mn_f = min(mn_f, arr_p[i]);
	}

	if (S + mn_d + mn_f <= 100)
		cout << "yes\n";
	else
		cout << "no\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

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