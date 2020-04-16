#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, K, i = 0, Arry[100] = {0}, Mid;
    cin >> T;
	while(T--)
	{
	    cin >> N >> K;
	    N--;
	    i = 0;
	    while(i <= N)
	    {
	        cin >> Arry[i];
	        i++;
	    }
	    sort(Arry, Arry+(N+1));
	    Mid = (N+K)/2;
	    cout << Arry[Mid] << endl;
	}
}