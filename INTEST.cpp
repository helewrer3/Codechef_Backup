#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int T, K, num, s = 0, i = 0,r = 0;
	cin >> T;
	cin >> K;
	while(T--)
	{
		cin >> num;
		if(num%K == 0)r++;
	}
	cout << r;
}