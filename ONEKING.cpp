/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

bool MyComp(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.second < p2.second;
}

ll N, st, ed;
vector<pair<ll, ll> > arr_P;

void Input(){
    cin >> N, arr_P.clear(), arr_P.resize(N);
    for(auto &z:arr_P)
        cin >> z.first >> z.second;
    sort(arr_P.begin(), arr_P.end(), MyComp);
}

void Solve(){
    ll cnt = 1, prev_ed = 0;;
    for(ll i = 1; i < N; i++){
        if(arr_P[i].first > arr_P[prev_ed].second){
            cnt++;
            prev_ed = i;
        }
    }
    cout << cnt << "\n";
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