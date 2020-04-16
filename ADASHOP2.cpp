/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll r;
ll c;

void Input(){
    cin >> r >> c;
}

void Solve(){
    if(r != 1 or c != 1){
        if(r != c){
        	ll x = (r+c)/2;
        	cout << 31 << endl;
        	cout << x << " " << x << endl << 1 << " " << 1 << endl;
        }
        else{
        	cout << 30 << endl;
        	cout << 1 << " " << 1 << endl;
        }
    }
    else{
        cout << 29 << endl;
    }
    
    cout << 2 << " " << 2 << endl << 1 << " " << 3 << endl << 2 << " " << 4 << endl << 1 << " " << 5 << endl << 2 << " " << 6 << endl << 1 << " " << 7 << endl << 2 << " " << 8 << endl << 3 << " " << 7 << endl << 4 << " " << 8 << endl << 5 << " " << 7 << endl << 6 << " " << 8 << endl << 8 << " " << 6 << endl << 7 << " " << 5 << endl << 8 << " " << 4 << endl << 7 << " " << 3 << endl << 8 << " " << 2 << endl << 7 << " " << 1 << endl << 6 << " " << 2 << endl << 5 << " " << 1 << endl << 4 << " " << 2 << endl << 3 << " " << 1 << endl << 2 << " " << 2 << endl << 5 << " " << 5 << endl << 4 << " " << 6 << endl << 3 << " " << 5 << endl << 5 << " " << 3 << endl << 6 << " " << 4 << endl << 5 << " " << 5 << endl << 8 << " " << 8 << endl;

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