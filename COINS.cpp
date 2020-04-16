/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll FindCn(ll x, ll *arr){
    if(x <= 4){
        return x;
    }

    return (arr[x])? arr[x]:(arr[x] = max(x, FindCn(x/2, arr) + FindCn(x/3, arr) + FindCn(x/4, arr)));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, T;

    
    while(cin >> T){
        ll *arr = new ll[T+1];
        cout << FindCn(N, arr) << "\n";
    }
    return 0;
}