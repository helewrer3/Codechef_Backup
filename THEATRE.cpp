/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, real_ans = 0, profit = 0;
unordered_map<char, unordered_map<ll, ll> > mp; 

bool MyComp(ll a, ll b){
    return a > b;
}


void Input(){
    cin >> n;
    ll time;
    char movie;
    mp.clear();
    while(n--){
        cin >> movie >> time;
        mp[movie][time]++;
    }
}

void MaxProfit(vector<ll> show_arr, char movie_ptr, ll time_ptr, unordered_map<char, bool> movie_bool){
    if(time_ptr == 15){
        ll ans  = -100*(4 - movie_bool.size());
        ll price = 100;
        sort(show_arr.begin(), show_arr.end(), MyComp);

        for(ll i = 0; i < show_arr.size(); i++){
            ans += show_arr[i]*price;
            price -= 25;
        }
        profit = max(profit, ans);
        return;
    }
    
    if(movie_ptr == 'E'){
        MaxProfit(show_arr, 'A', time_ptr + 3, movie_bool);
    }
    else{
    	
        MaxProfit(show_arr, movie_ptr+1, time_ptr, movie_bool);
        
        if(movie_bool[movie_ptr] == false and mp[movie_ptr][time_ptr]){
            show_arr.push_back(mp[movie_ptr][time_ptr]);
            movie_bool[movie_ptr] = true;
        	MaxProfit(show_arr, 'A', time_ptr + 3, movie_bool);
        }
        
    }

    return;

}

void Solve(){
    vector<ll> show_arr;
    unordered_map<char, bool> movie_bool;
    profit = INT_MIN;
    MaxProfit(show_arr, 'A', 3, movie_bool);
    cout << profit << endl;
    real_ans += profit;
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
    cout << real_ans;
    return 0;
}