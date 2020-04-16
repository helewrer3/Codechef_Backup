/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<vector<ll> > arr;

void Input(){
cin >> N, arr.clear();
arr = vector<vector<ll> >(N, vector<ll>(N));
for(ll i = 0; i < N; i++)
    for(ll j = 0; j < N; j++)
        cin >> arr[i][j];
}

void Solve(){
for(ll i = 0; i < N; i++){
    bool chk = false;
    for(ll j = 0; j < N; j++){
        if(arr[i][j] == 0){
            chk = true;
            break;
        }
    }
    if(!chk){
        cout << "NO\n";
        return;
    }
}

for(ll i = 0; i < N; i++){
    bool chk = false;
    for(ll j = 0; j < N; j++){
        if(arr[j][i] == 0){
            chk = true;
            break;
        }
    }
    if(!chk){
        cout << "NO\n";
        return;
    }
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