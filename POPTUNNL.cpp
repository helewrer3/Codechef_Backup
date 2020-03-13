/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, k, ctr;
vector<string> arr;

void Input(){
    cin >> n >> k;
    arr.clear();
    string str;
    for(ll i = 0; i < n; i++){
        cin >> str;
        arr.push_back(str);
    }
    
}

bool Solve(){
    ll ptr = 0;
    ctr = 0;
    bool isOne;

    while(ptr < n){
        isOne = false;

        if(ptr == n-1){
            return true;
        }

        for(ll i = min(n-1, ptr+k); i >= max(0ll, ptr-k); i--){
            if(arr[ptr][i] == '1' and i != ptr){
                ptr = i;
                ctr++;
                isOne = true;
                break;
            }
        }

        if(!isOne){
            return false;
        }
    }

    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        if(Solve()){
            cout << ctr << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}