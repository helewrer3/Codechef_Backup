#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T, N, i = 1, ans = 0;
    cin >> T;
	while(T--)
	{
		cin >> N;
		ans = 0;
		i = 1;
		while(pow(5,i) <= N)
		{
		    ans += N/pow(5,i);
		    i++;
		}
		cout << ans << endl;
	}
}