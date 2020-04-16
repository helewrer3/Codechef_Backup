/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll X, Y, K;

void Input(){
    cin >> X >> Y >> K;
}

void Solve(){
    if(((X+Y)/K)%2 == 0)
        cout << "Chef\n";
    else
        cout << "Paja\n";

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