/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll A, B, ans;

void Input(){
    cin >> A >> B;
}

void Solve(){
    ans = 0;

    if(A == B){
        cout << -1 <<endl; 
        return;
    }

    for(ll i = 1; i*i <= abs(A - B); i++){
        if(abs(A-B)%i == 0){
            ans++;
            if(i*i != abs(A-B))
                ans++;
        }
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