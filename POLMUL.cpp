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

ll N, M;
ll arr_p[size_1d], arr_q[size_1d], arr_ans[size_1d];

void Input() {
	cin >> N >> M, mem(arr_ans, 0);
	for (ll i = 0; i < N; i++)
		cin >> arr_p[i];
	for (ll i = 0; i < M; i++)
		cin >> arr_q[i];
}

void Solve() {
	for (ll p = 0; p < N; p++) {
		for (ll q = 0; q < M; q++) {
			arr_ans[p + q] += arr_q[q] * arr_p[p];
		}
	}
	for (ll i = 0; i < (N + M - 1); i++) {
		cout << arr_ans[i] << " ";
	}
	cout << endl;
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