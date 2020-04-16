/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, m;
map<double, ll> x_mp;
map<double, ll> y_mp;

void Input(){
    cin >> n >> m;
    x_mp.clear();
    y_mp.clear();

    for(ll i = 0; i < n; i++){
        ll data;
        cin >> data;
        x_mp[data] = 1;
    }

    for(ll i = 0; i < m; i++){
        ll data;
        cin >> data;
        y_mp[data] = 1;
    }
}

void Solve(){
    ll ans = 0;
    
    for(auto yt:y_mp){
        map<double, bool> visited_x_mp;
        for(auto xt:x_mp){
        	if(yt.first and xt.first and x_mp.count(-1*yt.first*yt.first/xt.first) and !visited_x_mp.count(-1*yt.first*yt.first/xt.first)){
        		visited_x_mp[xt.first] = true;
        		ans++;
        	}
        }
    }
    
    for(auto xt:x_mp){
        map<double, bool> visited_y_mp;
    	for(auto yt:y_mp){
    		if(xt.first and yt.first and y_mp.count(-1*xt.first*xt.first/yt.first) and !visited_y_mp.count(-1*xt.first*xt.first/yt.first)){
    			visited_y_mp[yt.first] = true;
    			ans++;
    		}
    	}
    }
    
    
    if(x_mp.count(0) or y_mp.count(0)){
    	if(x_mp.count(0)){
    		ans += (x_mp.size()-1)*y_mp.size();
    		if(y_mp.count(0))
    			ans -= (x_mp.size()-1);
    	}
    	else{
    		ans += (y_mp.size()-1)*x_mp.size();
    		if(y_mp.count(0))
    			ans -= (y_mp.size()-1);
    	}
    }

    cout << max(0ll, ans) << endl;

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