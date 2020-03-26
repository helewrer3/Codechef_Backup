/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, R;
vector<pair<double, double> > arr;

bool MYCmp(pair<double, double> p1, pair<double, double> p2){
    return p1.first > p2.first;
}

void Input(){
    cin >> N >> R, arr.clear();
    double c, w;
    for(ll i = 0; i < N; i++){
        cin >> c >> w;
        arr.push_back(make_pair(w/c, c));
    }
    sort(arr.begin(), arr.end(), MYCmp);    
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        if(R-arr[i].second >= 0){
            R -= arr[i].second;
            ans += arr[i].second*arr[i].first;
        }
        else{
            cout << ans << "\n";
            return;
        }
    }
    cout << ans << "\n";
    return;
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