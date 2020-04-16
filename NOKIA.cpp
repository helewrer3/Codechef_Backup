/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K, mx, mn;

ll CalcMn(ll n){
    if(n <= 0)
        return 0;
    
    return (n+1) + CalcMn(n/2) + CalcMn(n - 1 - n/2);
}

ll CalcMx(ll n){
    if(n <= 0)
        return 0;
    
    return (n+1) + CalcMx(n-1);
}

void Input(){
    cin >> N >> K, mx = mn = 0;
}

void Solve(){
    mx = CalcMx(N), mn = CalcMn(N);
    if(K < mn)
        cout << -1;
    else if(K < mx)
        cout << 0;
    else
        cout << K - mx;
    cout << "\n";
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