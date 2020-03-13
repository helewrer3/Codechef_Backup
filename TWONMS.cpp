#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, A, B, N, C, D;
    cin >> T;
	while(T--)
	{
	    cin >> A >> B >> N;
	    if(N%2 == 0)
	    {
	        if(B > A) cout << B/A << endl;
	        else cout << A/B << endl;
	    }
	    else
	    {
	        if(2*A > B) cout << 2*A/B << endl;
	        else cout << B/(2*A) << endl;
	    }
	}
}  