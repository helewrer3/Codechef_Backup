/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, m;
ll sum_chef, sum_chefina;
set<ll> atk_chef, atk_chefina;
set<ll, greater<ll> > def_chef, def_chefina;

void Input(){
    atk_chef.clear();atk_chefina.clear();def_chef.clear();def_chefina.clear();sum_chef = sum_chefina = 0;
    cin >> n >> m;
    vector<ll> val_chef, val_chefina;
    vector<char> mode_chef, mode_chefina;
    for(ll i = 0; i < n; i++){
        ll d;
        cin >> d;
        sum_chef +=d;
        val_chef.push_back(d);
    }
    for(ll i = 0; i < n; i++){
        char d;
        cin >> d;
        mode_chef.push_back(d);
    }
    for(ll i = 0; i < m; i++){
        ll d;
        cin >> d;
        sum_chefina +=d;
        val_chefina.push_back(d);
    }
    
    for(ll i = 0; i < m; i++){
        char d;
        cin >> d;
        mode_chefina.push_back(d);
    }

    for(ll i = 0; i < n; i++){
        if(mode_chef[i] == 'A'){
            atk_chef.insert(val_chef[i]);
        }
        else{
            def_chef.insert(val_chef[i]);
        }
    }

    for(ll i = 0; i < m; i++){
        if(mode_chefina[i] == 'A'){
            atk_chefina.insert(val_chefina[i]);
        }
        else{
            def_chefina.insert(val_chefina[i]);
        }
    }

}

void Solve(){
    ll max_diff_chef = sum_chef - sum_chefina, max;
    bool isChef = true;
    while(1){
        ll tmp_diff;
        if(isChef){
            ll atk = *(atk_chef.begin());
            atk_chef.erase(atk_chef.begin());
            def_chef.insert(atk);
            ll def = *(def_chefina.begin());
            def_chefina.erase(def_chefina.begin());
            sum_chefina -= def;
        }
        else{
            ll atk = *(atk_chefina.begin());
            atk_chefina.erase(atk_chefina.begin());
            def_chefina.insert(atk);
            ll def = *(def_chef.begin());
            def_chef.erase(def_chef.begin());
            sum_chef -= def;
            //tmp_diff = sum_chefina - sum_chef;
        }
        tmp_diff = (sum_chef - sum_chefina);
        isChef = !isChef;
        max_diff = max(max_diff, tmp_diff);
        if(isChef){
            if(atk_chef.empty())
                break;
        }
        else if(!isChef){
            if(atk_chefina.empty())
                break;
        }
    }

    cout << max_diff << endl;

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

/*2 set per player, asc atk, desc def, pick atk, put in def, kill the opp def, check diff and store largest*/