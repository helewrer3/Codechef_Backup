/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr_dst, arr_cst;
map<ll, ll> cs_sm;

void Input(){
    cin >> N, arr_cst.clear(), arr_dst.clear(), arr_cst.resize(N), arr_dst.resize(N), cs_sm.clear();
    for(auto &z:arr_dst)
        cin >> z;
    for(auto &z:arr_cst)
        cin >> z;
    cs_sm[-1] = 0;
    cs_sm[0] = arr_cst[0];
    for(ll i = 1; i < N; i++)
        cs_sm[i] = arr_cst[i] + cs_sm[i=1];
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < N; j++){
            ll t_ans = INT_MAX;
            for(ll k = N-1; k >= j; k--){
                if(arr_dst[i]%(cs_sm[k] - cs_sm[j-1]) == 0){
                    t_ans = min(t_ans, arr_dst[i]/(cs_sm[k] - cs_sm[j-1]));
                }
            }
            ans += t_ans;
    }

    cout << ans << "\n";

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