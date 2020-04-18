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

ll N, M;
ll arr[size];

bool Fun(ll i, ll sum) {
	if (sum == 0)
		return true;
	if (i >= N or sum < 0)
		return false;
	return (Fun(i + 1, sum - arr[i]) or Fun(i + 1, sum));
}

void Input() {
	cin >> N >> M;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	if (Fun(0, M))
		cout << "Yes\n";
	else
		cout << "No\n";
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