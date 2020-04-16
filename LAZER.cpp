/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

struct Query{
    ll l, r, y;
};

struct Event{
    ll y, t, i;
    bool operator<(const Event &o) const {
		return make_pair(y, t)<make_pair(o.y, o.t);
	}
};

ll N, Q;
vector<ll> y_arr, f_arr, ans_arr; vector<Query> q_arr; vector<Event> e_arr;

void UpdateF(ll x, ll val){
    x++;
    for(x; x < N; x += x&-x)
        f_arr[x] += val;
}

ll QryF(ll i){
    ll sum = 0;
    for(; i > 0; i -= i&-i){
        sum += f_arr[i];
    }
    return sum;
}

void Input(){
    cin >> N >> Q, y_arr.clear(), y_arr.resize(N), f_arr.clear(), f_arr.resize(N), q_arr.clear(), e_arr.clear(), ans_arr.clear(), ans_arr.resize(Q);

    for(auto &z:y_arr) cin >> z;

    for(ll i = 0; i < Q; i++){
        ll x1, x2, h; Query Q;
        cin >> x1 >> x2 >> h, Q.l = x1-1, Q.r = x2-1, Q.y = h;
        q_arr.push_back(Q);
    }

    for(ll i = 0; i < N-1; i++){
        e_arr.push_back({min(y_arr[i], y_arr[i+1]), 1, i});
        e_arr.push_back({max(y_arr[i], y_arr[i+1]), 3, i});
    }

    for(ll i = 0; i < Q; i++)
        e_arr.push_back({q_arr[i].y, 2, i});
}


void Solve(){
      sort(e_arr.begin(), e_arr.end());

    for(Event e:e_arr){
        if(e.t == 1){
            UpdateF(e.i, 1);
        }
        else if(e.t == 2){
            ans_arr[e.i] = QryF(q_arr[e.i].r) - QryF(q_arr[e.i].l);
        }
        else{
            UpdateF(e.i, -1);
        }
    }

    for(ll i = 0; i < Q; i++)
        cout << ans_arr[i] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}