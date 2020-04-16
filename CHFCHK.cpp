/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, ans;

void Input(){
    cin >> N;
}

void Solve(){
    ans = INT_MAX;
    for(ll i = 0; i < N; i++){
        ll d; cin >> d;
        ans = min(ans, d);
    }

    cout << ans << endl;
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