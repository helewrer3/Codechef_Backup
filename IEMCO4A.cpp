#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, K, i, r;
    string S;
    cin >> T;
	while(T--)
	{
	    cin >> N >> K;
	    cin >> S;
	    i = 0;
	    r = 0;
	    while(i < S.size())
	    {
	        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') r++;
	        i++;
	    }
	    if(r > K) cout << "Good" << endl;
	    else cout << "Bad" << endl;
	}
}