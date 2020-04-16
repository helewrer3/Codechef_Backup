/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M, A[25][25], B[25][25];
string str;

void Input(){
    cin >> N >> M;
    for(ll i = 0; i < N; i++){
        cin >> str;
        for(ll j = 0; j < M; j++){
            A[i][j] = str[j] - '0';
        }
    }
    for(ll i = 0; i < N; i++){
        cin >> str;
        for(ll j = 0; j < M; j++){
            B[i][j] = str[j] - '0';
        }
    }
}

void Solve(){
    ll ans = INT_MAX;
    for(ll r = -N; r <= N; r++){
        for(ll c = -M; c <= M; c++){
            ll cnt = 0;
            for(ll i = 0; i < N; i++){
                for(ll j = 0; j < M; j++){
                    if(i + r >= N or i + r < 0 or j + c >= M or j + c < 0){
                        if(A[i][j]){
                            cnt++;
                        }
                    }
                    else if(A[i][j] != B[i+r][j+c]){
                        cnt++;
                    }
                }
            }
            ans = min(ans, cnt);
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