    /*May The Force Be With Me*/
    #include <bits/stdc++.h>
    #define ll long long
    #define MOD 1000000007
    using namespace std;

    ll N, K;
    vector<ll> arr;

    void Input(){
        cin >> N >> K;
        arr.clear();
        arr.resize(N);
        for(auto &z:arr)
            cin >> z;
    }

    void Solve(){
        ll K_sum = 0, ans = 0;
        for(ll i = 0; i <= K; i++)
            K_sum += i;
        
        vector<ll> pts;
        ll prev_item = 0;

        for(ll i = 0; i < N; i++){
            if(prev_item != arr[i]){
                pts.push_back(i);
                prev_item = arr[i];
            }
        }

        for(ll i = 0; i < pts.size(); i++){
            map<ll, bool> mp;
            ll tmp_sum = 0, tmp_size = 0;
            for(ll j = pts[i]; j < N; j++){
                if(!mp.count(arr[j])){
                    mp[arr[j]] = true;
                    tmp_sum+=arr[j];
                }
                if(tmp_sum < K_sum)
                    tmp_size++;
                else
                    break;
            }
            ans = max(ans, tmp_size);
        }

        cout << ans << endl;
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