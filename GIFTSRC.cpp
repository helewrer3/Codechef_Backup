/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll N, x, y;
string str;

void coord(ll i){
    if(str[i] == 'L')
        x--;
    else if(str[i] == 'R')
        x++;
    else if(str[i] == 'U')
        y++;
    else
        y--;
}

void Input(){
    cin >> N >> str, x = 0, y = 0;
}

void Solve(){
    coord(0);
    for(ll i = 1; i < N; i++){
        if(str[i-1] == 'L' or str[i-1] == 'R'){
            if(str[i] == 'U' or str[i] == 'D'){
                coord(i);
            }
        }
        else if(str[i-1] == 'U' or str[i-1] == 'D'){
            if((str[i] == 'L' or str[i] == 'R')){
                coord(i);
            }
        }
    }

    cout << x << " " << y << "\n";
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