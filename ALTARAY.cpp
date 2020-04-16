/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
map<ll, ll> mp;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    mp[N-1] = 1;
    for(ll i = N-2; i >= 0; i--){
        if(arr[i]*arr[i+1] < 0)
            mp[i] = 1 + mp[i+1];
        else
            mp[i] = 1;
    }

    for(ll i = 0; i < N; i++)
        cout << mp[i] << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}