#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T, N, P, i, r = 0, s = 0;
    cin >> T;
	while(T--)
	{
	    cin >> N >> P;
	    while(N > 0)
	    {
	        cin >> i;
	        if(i <= floor(P/10)) r++;
	        else if(i >= floor(P/2)) s++;
	        N--;
	    }
	    if(r == 2 && s == 1) cout << "yes" << endl;
	    else cout << "no" << endl;
	    r = s = 0;
	}
}