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
deque<ll> arr_r, arr_g, arr_e;

void Input() {
	cin >> N >> M, arr_r.clear(), arr_g.clear(), arr_e.clear();
	for (ll i = 0; i < N; i++) {
		ll d;
		cin >> d;
		arr_r.push_back(d);
	}
	for (ll i = 0; i < N; i++) {
		ll d;
		cin >> d;
		arr_g.push_back(d);
	}
	for (ll i = 0; i < M; i++) {
		ll d;
		cin >> d;
		arr_e.push_back(d);
	}
}

void Solve() {
	ll pt_r = 0, pt_g = 0;
	for (ll i = 0; i < M / 2 + N; i++) {
		if (arr_r.front() > arr_g.front()) {
			pt_r++;
			if (!arr_e.empty()) {
				arr_r.push_back(arr_e.front());
				arr_e.pop_front();
				arr_g.push_back(arr_e.front());
				arr_e.pop_front();
			}
		}
		else {
			pt_g++;
			if (!arr_e.empty()) {
				arr_g.push_back(arr_e.front());
				arr_e.pop_front();
				arr_r.push_back(arr_e.front());
				arr_e.pop_front();
			}
		}
		arr_r.pop_front();
		arr_g.pop_front();
	}

	if (pt_r > pt_g)
		cout << "Radhesh wins";
	else if (pt_r < pt_g)
		cout << "Geethakoomaree wins";
	else
		cout << "Tie";
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