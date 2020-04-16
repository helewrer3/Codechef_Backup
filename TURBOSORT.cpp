#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int T, i = 0, x = 0, arry[1000000] = {0};
	cin >> T;
	while(i < T)
	{
		cin >> arry[i];
		i++;
	}
	sort(arry,arry+i);
	while(x < T)
	{
		cout << arry[x] << endl;
		x++;
	}
}