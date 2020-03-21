/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
map<char, ll> mp_cnt;
string str, meal = "codechef";

void Input(){
    cin >> N, mp_cnt.clear();
    while(N--){
        cin >> str;
        for(ll i = 0; i < str.size(); i++){
            mp_cnt[str[i]]++;
        }
    }
}

void Solve(){
    ll ans = INT_MAX;
    str = meal;
    for(ll i = 0; i < str.size(); i++){
        ll temp_ans;
        if(str[i] == 'c' or str[i] == 'e'){
            temp_ans = mp_cnt[str[i]]/2;
        }
        else{
            temp_ans = mp_cnt[str[i]];
        }
        ans = min(temp_ans, ans);
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