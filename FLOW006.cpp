#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, ans = 0;
    cin >> T;
	while(T--)
	{
	    cin >> N;
	    ans = 0;
	    while(N > 0)
	    {
	        ans += N%10;
	        N /= 10;
	    }
	    cout << ans << endl;
	}
}