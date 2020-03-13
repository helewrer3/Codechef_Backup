#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N;
    cin >> T;
	while(T--)
	{
	    cin >> N;
	    if(N%8 == 1) cout << N+3 << "LB" << endl;
	    else if(N%8 == 2)cout << N+3 << "MB" << endl;
	    else if(N%8 == 3)cout << N+3 << "UB" << endl;
	    else if(N%8 == 4)cout << N-3 << "LB" << endl;
	    else if(N%8 == 5)cout << N-3 << "MB" << endl;
	    else if(N%8 == 6)cout << N-3 << "UB" << endl;
	    else if(N%8 == 7)cout << N+1 << "SU" << endl;
	    else cout << N-1 <<"SL" << endl;
	}
}