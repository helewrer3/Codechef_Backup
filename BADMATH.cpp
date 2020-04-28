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

ll N, M, ans;
char arr[size_1d];

void Cnt(string osf, ll i, ll sum) {
	if (i == N) {
		if (sum % M == 0)
			ans++;
		return;
	}
	if (osf[i] == '_') {
		Cnt(osf, i + 1, sum);
		Cnt(osf, i + 1, sum + pow(2, ((N - 1) - i)));
	}
	else {
		ll digit = (osf[i] - '0') * pow(2, ((N - 1) - i));
		Cnt(osf, i + 1, sum + digit);
	}
}

void Input() {
	cin >> N >> M, ans = 0;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
	Cnt(arr, 0, 0);
}

void Solve() {
	cout << ans << endl;
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