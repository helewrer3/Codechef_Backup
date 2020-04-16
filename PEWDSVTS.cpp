/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, A, B, X, Y, Z;
priority_queue<ll> Q;

void Input(){
    cin >> N >> A >> B >> X >> Y >> Z;
    Q = priority_queue <ll>();
    while(N--){
        ll data;
        cin >> data;
        Q.push(data);
    }
}

void Solve(){
    ll days = ceil((double(Z - B))/(double(Y))) - 1, mny_rqd = Z - (A + X*days), cnt = 0;

    if(mny_rqd <= 0){
        cout << cnt << "\n";
        return;   
    }

    while(!Q.empty()){
        ll top = Q.top();
        Q.pop(), mny_rqd -= top, top /= 2, cnt++;

        if(mny_rqd <= 0){
            cout << cnt << "\n";
            return;
        }

        if(top)
            Q.push(top);
    }
    
    cout << "RIP" << "\n";

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