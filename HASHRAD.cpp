/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string str, str_ans;
ll a_cnt, z_cnt;

void Input(){
    cin >> str, str_ans.clear();
    for(ll i = 0; i < str.size(); i++)
        str_ans += 'a';
    a_cnt = count(str.begin(), str.end(), 'a');
    z_cnt = count(str.begin(), str.end(), 'z');
}

void Solve(){
    ll val = 0;
    for(ll i = 0; i < str.size(); i++){
        val += str[i] - 'a';
    }
    if(a_cnt == str.size() or z_cnt == str.size() or str.size() == 1){
        cout << val << " -1\n";
        return;
    }

    cout << val << " ";
    for(ll i = str_ans.size()-1; i >= 0; i--){
    	if(val <= 0)
    		break;
        if(val >= 25){
            str_ans[i] = 'z';
            val -= 25;
        }
        else
        {
            str_ans[i] = 'a' + val;
            val = 0;
        }
    }

    if(str_ans == str){
        for(ll i = str_ans.size()-2; i >= 0; i--){
            if(str_ans[i] != 'z'){
                str_ans[i]++;
                str_ans[i+1]--;
                break;
            }
        }
    }
    cout << str_ans <<"\n";

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