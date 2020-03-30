/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;
vector<ll> arr;

void Input(){
    cin >> N >> K, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll sum = 0; priority_queue<pair<ll, ll> > PQ;
    for(ll i = 0; i < N; i++)
        sum += arr[i];
    
    for(ll i = 0; i < N; i++){
        PQ.push(make_pair(sum, N-1));
        sum -= arr[i];
    }

    while(K--){
        pair<ll, ll> P = PQ.top();
        PQ.pop();
        cout << P.first << " ";
        if(P.second)
            PQ.push(make_pair(P.first - arr[P.second], P.second - 1));
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}