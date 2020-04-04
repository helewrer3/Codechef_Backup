/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, days;
map<ll, list<ll> > mp_lis, mp_ans;

ll FndDiv(ll src){
    if(src%2 == 0)
        return 2;
    
    for(ll i = 3; i <= sqrt(src); i++)
        if(src%i == 0)
            return i;
    
    return src;
}

void Input(){
    cin >> N, days = 0,  mp_lis.clear(), mp_ans.clear();
}

void Solve(){
    mp_lis[1].push_back(1);

    for(ll i = 2; i <= N; i++){
        mp_lis[FndDiv(i)].push_back(i);
    }

    for(auto it:mp_lis){
        ll i = 1;
        for(auto jt:it.second){
            mp_ans[i].push_back(jt);
            i++;
        }
    }

    cout << mp_ans.size() << "\n";

    for(auto it:mp_ans){
        cout << it.second.size() << " ";
        for(auto jt:it.second){
            cout << jt << " ";
        }
        cout << "\n";
    }

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