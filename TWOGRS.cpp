/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll A, B, C;

void Input(){
    cin >> A >> B >> C;

}

void Solve(){
    if((1*A + 2*B + 3*C)%2 == 1){
        cout << "NO\n";
        return;
    }
    if((C%2 == 1) and (B == 0) and (A == 1)){
        cout << "NO\n";
        return;
    }
    if((B%2 == 1) and (A == 0) and (C == 0)){
        cout << "NO\n";
        return;
    }
    if((B == 1) and (A == 0) and (C%2 == 0)){
        cout << "NO\n";
        return;
    }
    

    cout << "YES\n";

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