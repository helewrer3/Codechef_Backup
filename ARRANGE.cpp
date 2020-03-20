/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll K;
string str;
map<ll, char> mp;

void Input(){
    cin >> K >> str, mp.clear();
}

void Solve(){
    for(ll i = 0; i < str.length(); i++){
        ll idx = i, new_idx = 0, cnt = 0;
        while(idx){
            new_idx <<= 1;
            if(idx&1 == 1)
                new_idx ^= 1;
            idx >>= 1;
            cnt++;
        }
        while(cnt <= K){
            new_idx <<= 1;
            cnt++;
        }
        mp[new_idx] = str[i];
    }

    for(auto it:mp)
        cout << it.second;
    cout << "\n";
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