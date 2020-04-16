#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, P, r, x, y;
    string S;
    cin >> T;
	while(T--)
	{
	    cin >> N >> P; r = 1; x = N/P; y = P; S.clear();
	    if(P == 1 || P == 2) r = 0;
	    else if(P%2 != 0)
	    {
	        while(x > 0)
	        {
	            y = P;y--;
	            while(y >= 0)
	            {
	               if(y != (P/2)) S += 'a';
	               else S += 'b';
	               y--;
	            }
	            x--;
	        }
	    }
	    else
	    {
	        while(x > 0)
	        {
	            y = P; y--;
	            while(y >= 0)
	            {
	                if(y == 0 || y == P-1) S += 'a';
	                else S += 'b';
	                y--;
	            }
	            x--;
	        }
	    }
	    if(r == 0) cout << "impossible" << endl;
	    else cout << S << endl;
	}
}