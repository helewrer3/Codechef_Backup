/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, A, B, cnt_one;

void Input(){
    cin >> N >> A >> B, cnt_one = 0;
    cnt_one = __builtin_popcountll(A) + __builtin_popcountll(B);
}

void Solve(){
    ll ans;
    if(cnt_one <= N){
        ans = (pow(2, N - cnt_one)*(pow(2, cnt_one) - 1));
        cout << ans << "\n";
    }
    else{
        ans = (pow(2, cnt_one - N)*(pow(2, 2*N - cnt_one) - 1));
        cout << ans << "\n";
    }
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