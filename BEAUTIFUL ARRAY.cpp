#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T, arry[10000] = {0}, N, i = 0, r = 0, s = 0,p = 1,q = 0;
    cin >> T;
	while(T--)
	{
	    cin >> N;
	    r = N;
	    while(s < N-1)
	    {
	       cin >> arry[s];
	       s++;
	    }
	    while(r > 0)
	    {
	        i = 0;
	        while(i < N-1)
	        {
	            p = i+1;
	            while(p < N)
	            {
	                if(arry[i]*arry[p] == arry[r]) q++;
	                p++;
	            }
	            i++;
	        }
	        r--;
	    }
	    cout << q;
	    if(q == N) cout << "yes" << endl;
	    else cout << "no" << endl;
	    i = 0; s = 0;
	}
}