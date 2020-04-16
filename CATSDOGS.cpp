#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, C, D, L, p;
    cin >> T;
	while(T--)
	{
	    cin >> C >> D >> L;
	    if(2*D >= C)
	    {
	        if((L <= 4*(C+D)) && (L >= 4*D) && L%4 == 0) cout << "yes" << endl;
	        else cout << "no" << endl;
	    }
	    else
	    {
	        p = C - 2*D;
	        if((L <= 4*(C+D)) && (L >= 4*(D+p)) && L%4 == 0) cout << "yes" << endl;
	        else cout << "no" << endl;
	    }
	}
}