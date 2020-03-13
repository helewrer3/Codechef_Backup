#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, i = 0, r = 0;
    string s;
    string ch1 = "010"; string ch2 = "101";
    cin >> T;
	while(T--)
	{
	    cin >> s;
	    i = s.find(ch1);
	    r = s.find(ch2);
	    if(i == -1 && r == -1) cout << "Bad" << endl;
	    else cout << "Good" << endl;
	}
}