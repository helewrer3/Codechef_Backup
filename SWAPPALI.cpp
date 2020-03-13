/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
string str;

void Input(){
    cin >> N;
    cin >> str;

}

void Solve(){
    ll ans = 0;
    map<ll, bool> isSwped;
    for(ll i = 0; i < N/2; i++){
        ll j = N - i - 1;
        if(str[i] != str[j]){
        	if(str[j-1] == str[i] and !isSwped.count(j) and j-1 >= N/2){
        	    isSwped[j] = true;
        	    isSwped[j-1] = true;
        	    swap(str[j], str[j-1]);
        	    ans++;
        	}
        	else{
        	    cout << "NO" << endl; return;
        	}
        }
    }
    cout << "YES" << endl << ans << endl;
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