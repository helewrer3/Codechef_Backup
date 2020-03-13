/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> y_arr;

void Input(){
    cin >> N >> Q;
    y_arr.clear();
    y_arr.resize(N);
    for(auto &z:y_arr)
        cin >> z;
}


void Solve(){
    while(Q--){
    	ll x1, x2, y, ans = 0;
    	cin >> x1 >> x2 >> y;
    	x1--; x2--;
    	for(ll i = x1; i <= x2-1; i++){
    	    if((y_arr[i] - y)*(y_arr[i+1] - y) <= 0){
    	        ans++;
    	    }
    	}
    	cout << ans << endl;
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