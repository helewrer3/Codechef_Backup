/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll X, K;


void Input(){
    cin >> X >> K;
}

void Solve(){
    if(K >=  X){
        cout << 0 << "\n";
        return;
    }
    else{
        ll cnt = 0;
        for(ll i = 2; i*i <= X; i++){
	        if(X%i != 0)
                continue;
	        while(X%i == 0){
	            cnt++;
	            X /= i;
	        }
	    }
        if(X > 1)
            cnt++;

        if(cnt >= K){
            cout << 1 << "\n";
            return;
        }
        else{
            cout << 0 << "\n";
            return;
        }
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