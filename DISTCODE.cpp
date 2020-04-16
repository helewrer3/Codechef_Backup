/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string str;
map<string, bool> mp;

void Input(){
    cin >> str, mp.clear();
    for(ll i = 1; i < str.size(); i++){
        string psf;
        psf += str[i-1];
        psf += str[i];
        mp[psf] = true;
    }
}

void Solve(){
    cout << mp.size() << "\n";
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