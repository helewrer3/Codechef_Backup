#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int T, i = 0, o = 0, r = 0;
	string S;
	cin >> T;
	while(T != 0)
	{
		cin >> S;
		i = 1;
		r = 0;
		while(i < S.size())
		{
			o=i-1;
			while(o >= 0)
			{
				if(S[o] == S[i])
				{
					r+=1;
					continue;
				}
				o--;
			}
			i++;
		}
		if (r >= 1) cout << "yes";
		else cout << "no";
		T--;
	}
	return 0;
}
