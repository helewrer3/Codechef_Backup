/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, idx, rem, ans;
vector<double> arr_tax = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3};

void Input(){
    cin >> N;
}

void Solve(){
    if(N <= 250000){
        ans = 0;
    }
    else if(N <= 500000){
        ans = (N - 250000)*0.05 + 250000*(arr_tax[0]);
    }
    else if(N <= 750000){
        ans = (N - 500000)*0.1 + 250000*(arr_tax[0] + arr_tax[1]);
    }
    else if(N <= 1000000){
        ans = (N - 750000)*0.15 + 250000*(arr_tax[0] + arr_tax[1] + arr_tax[2]);
    }
    else if(N <= 1250000){
        ans = (N - 1000000)*0.2 + 250000*(arr_tax[0] + arr_tax[1] + arr_tax[2] + arr_tax[3]);
    }
    else if(N <= 1500000){
        ans = (N - 1250000)*0.25 + 250000*(arr_tax[0] + arr_tax[1] + arr_tax[2] + arr_tax[3] + arr_tax[4]);
    }
    else{
        ans = (N - 1500000)*0.3 + 250000*(arr_tax[0] + arr_tax[1] + arr_tax[2] + arr_tax[3] + arr_tax[4] + arr_tax[5]);
    }
    
    cout << N - ans << endl;
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