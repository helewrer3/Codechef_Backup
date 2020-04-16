/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
ll A, B;
string str;

void Input(){
    cin >> N >> str, N*= 2;
}

void Solve(){
    A = B = 0;
    ll d, ta, tb;
    ta = tb = N/2;
    for(ll i = 1; i <= N; i++){
        d = str[i-1] - '0';
        if(i%2 == 1){
            A += d;
            ta--;
        }
        else{
            B += d;
            tb--;
        }

        if((A > B + tb) or (B > A + ta)){
            cout << i << endl;
            return;
        }
    }

    cout << N << endl;
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