#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
	return (n == 0 || n == 1) ? 1: n*fact(n-1);
}

int main()
{
	cin >> T >> N;
	while(T--)
	{
		cin >> N;
		cout << fact(N) << endl;
	}
}
