/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, X;
string str;
map<ll, bool> arr;

void Input(){
    cin >> N >> X >> str, arr.clear();

}

void Solve(){
    ll ans = 1;
    arr[X] = true;
    for(ll i = 0; i < N; i++){
        if(str[i] == 'R')
            X++;
        else
            X--;
        
        if(!arr.count(X)){
            ans++;
            arr[X] = true;
        }
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