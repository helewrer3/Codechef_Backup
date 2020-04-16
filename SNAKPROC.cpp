#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T, R = 0, i = 0, s = 0;
    string L;
    cin >> T;
	while(T--)
	{
	    cin >> R;
	    cin >> L;
	    i = 0; s = 0;
	    while(i < R)
	    {
	        if(L[i] == 'H') s++;
	        else if(L[i] == 'T') s--;
	        if(s > 1 || s < 0) break;
	        i++;
	    }
	    if(s == 0) cout << "Valid" << endl;
	    else cout << "Invalid" << endl;
	}
}