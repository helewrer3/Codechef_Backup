/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<vector<char> > arr;

void Input(){
    cin >> N, arr.clear();
    arr.resize(N, vector<char>(N));
    for(ll i = 0; i < N; i++)
        for(ll j = 0; j < N; j++)
            cin >> arr[i][j];
}

void Solve(){
    ll arr_x[N][N], arr_y[N][N], ans = 0;

    for(ll i = 0; i < N; i++){
        for(ll j = N-1; j >= 0; j--){
            if(arr[i][j] == '.'){
                if(j != N-1)
                    arr_x[i][j] = arr_x[i][j+1];
                else
                    arr_x[i][j] = 1;
            }
            else{
                arr_x[i][j] = 0;
            }
            if(arr[j][i] == '.'){
                if(j != N-1){
                    arr_y[j][i] = arr_y[j+1][i];
                }
                else
                    arr_y[j][i] = 1;
            }
            else{
                arr_y[j][i] = 0;
            }
        }
    }

    for(ll i = 0; i < N; i++)
        for(ll j = 0; j < N; j++)
            if(arr_x[i][j] == 1 and arr_y[i][j] == 1)
                ans++;
    
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