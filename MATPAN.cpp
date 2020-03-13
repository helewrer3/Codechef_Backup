#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, Arry[25], i = 0, p = 0;
    string str;
    cin >> T;
	while(T--)
	{
	    i = 0;
	    while(i <= 25)
	    {
	        cin >> Arry[i];
	        i++;
	    }
	    cin >> str;
	    i = 0;
	    p = 0;
	    while(i < str.size())
	    {
	        p = str[i] - 97;
	        Arry[p] = 0;
	        i++;
	    }
	    i = 0;
	    p = 0;
	    while(i <= 25)
	    {
	        p += Arry[i];
	        i++;
	    }
	    cout << p << endl;
	}
}