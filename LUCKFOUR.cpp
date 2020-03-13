#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int T, i = 0, r = 0;
	string N;
	cin >> T;
	while(T--)
	{
		cin >> N;
		r = 0;
		i = 0;
		while(i < N.size())
		{
			if(N[i] == '4')
			{
				r++;
			}
			i++;
		}
		cout << r << endl;
	}
}
