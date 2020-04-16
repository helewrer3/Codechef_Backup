    /*May The Force Be With Me*/
    #include <bits/stdc++.h>
    #define ll long long
    #define MOD 1000000007
    using namespace std;

    double D, U, N, M, R, C, ans;

    void Input(){
        cin >> D >> U >> N;
        ans = D*U;
    }

void Solve(){
    ll idx = 0;
    for(ll i = 1; i <= N; i++){
        cin >> M >> R >> C;
        if(ans > (U*R + C/M)){
            ans = U*R + C/M;
            idx = i;
        }
    }

    cout << idx << "\n";
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