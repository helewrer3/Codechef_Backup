/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, days;

void Input(){
    cin >> N;
}

void Solve(){
    if(N <= 3){
        cout << "1\n" << N;
        for(ll i = 1; i <= N; i++)
            cout << " " << i;
    }
    else{
        cout << N/2 << "\n";
        cout << "3 1 2 3";
        for(ll i = 4; i <= N; i++){
            if(i%2 == 0){
                if(i != N)
                    cout << "\n2";
                else
                    cout << "\n1";
            }
            cout << " " << i;
        }
    }
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