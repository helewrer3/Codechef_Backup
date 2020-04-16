/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
ll mx, s, p, v, ans;

void Input(){
    cin >> n;
}

void Solve(){
    ans = INT_MIN;
    while(n--){
        cin >> s >> p >> v;
        ans = max(ans, v*(p/(s+1)));
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