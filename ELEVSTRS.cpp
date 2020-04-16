#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T;
    float N, Vc, Ve, Tc, Te;
    cin >> T;
	while(T--)
	{
	    cin >> N >> Vc >> Ve;
	    Te = 2*N/Ve;
	    Tc = sqrt(2)*N/Vc;
	    if(Te > Tc) cout << "Stairs" << endl;
	    else cout << "Elevator" << endl;
	}
}