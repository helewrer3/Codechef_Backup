/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, k;
string str;

void Input(){
    cin >> n >> k;
    getline(cin >> ws, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
}

void Solve(){
    ll ans = 0;
    ll i;
    for(i = str.size() - 1; k > 0; i--,k--){
        if(str[i] == 'H'){
            for(ll j = 0; j < i; j++){
                if(str[j] == 'H')
                    str[j] = 'T';
                else
                    str[j] = 'H';
            }
        }
    }

    for(ll j = 0; j <= i; j++){
        if(str[j] == 'H')
            ans++;
    }

    cout << ans << endl;
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