#include<bits/stdc++.h>

using namespace std;

int main()
{
	float X, Y;
	cin >> X >> Y;
	if((X + 0.50) > Y || fmod(X,5) != 0)
	{
		cout << Y;
	}
	else
	{
		cout << fixed;
		cout << setprecision(2);
		cout << Y - X - 0.50;
	}
}