/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll matches[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
ll A, B;

void Input(){
    cin >> A >> B, A += B;
}

void Solve(){
    ll ans = 0;
    while(A){
        ans += matches[A%10];
        A/=10;
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