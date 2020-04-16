#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, K, W[100000] = {0}, i = 0, sum1, sum2;
    cin >> T;
	while(T--)
	{
	    cin >> N >> K;
	    N--; K--; sum1 = 0; sum2 = 0; i = 0;
	    while(i <= N)
	    {
	        cin >> W[i];
	        i++;
	    }
	    i = 0;
	    sort(W, W+(N+1));
	    if(K < N/2)
	    {
	        while(i <= K)
	        {
	            sum1 += W[i];
	            i++;
	        }
	        while(i <= N)
	        {
	            sum2 += W[i];
	            i++;
	        }
	        cout << abs(sum1 - sum2) << endl;
	    }
	    else
	    {
	        K = N - K - 1;    
	        while(i <= K)
	        {
	            sum1 += W[i];
	            i++;
	        }
	        while(i <= N)
	        {
	            sum2 += W[i];
	            i++;
	        }
	        cout << abs(sum1 - sum2) << endl;
	    }
	}
}