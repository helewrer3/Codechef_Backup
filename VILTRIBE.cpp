#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, r = 0, s = 0, i = 0, m = 0, n = 0, x = 0;
    string S;
    char A = 'A', B = 'B', C = '.';
    cin >> T;
	while(T--)
	{
	    cin >> S;
	    r = 0;
	    s = 0;
	    i = 0;
	    while(i < S.size())
	    {
	        if(S[i] == A)
	        {
	            r++;
	            m = 1;
	            n = i + 1;
	            x = 0;
	            while(n < S.size())
	            {
	                if(S[n] == B) break;
	                else if(S[n] == C) x++;
	                else if(S[n] == A) 
	                {
	                    m = 0;
	                    break;
	                }
	                n++;
	            }
	            if(m == 0) r += x;
	        }
	        else if(S[i] == B)
	        {
	            s++;
	            m = 1;
	            n = i + 1;
	            x = 0;
	            while(n < S.size())
	            {
	                if(S[n] == A) break;
	                else if(S[n] == C) x++;
	                else if(S[n] == B) 
	                {
	                    m = 0;
	                    break;
	                }
	                n++;
	            }
	            if(m == 0) s += x;
	        }
	        i++;
	    }
	    cout << r << " " << s << endl;
	}
}