#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	long long int T, N, K, s = 0;
	cin >> T;
	while(T--)
	{
		cin >> N;
		cin >> K;
		K -= 1;
		N -= 1;
		long long int arry[N] = {0};
		s = 0;
		while(s <= N)
		{
			cin >> arry[s];
			s++;
		}
		s = arry[K];
		sort(arry,arry+(N+1));
		int Left = 0;int Right = N;int Mid = (Left+Right)/2;
		while(Left <= Right)
		{
			Mid = (Left+Right)/2;
			if(arry[Mid] == s)
			{
			    if(arry[Mid - 1] == s) Right = Mid - 1;
				else break;
			}
			else if(arry[Mid] < s) Left = Mid + 1;
			else Right = Mid - 1;
		}
		cout << Mid + 1 << endl;
	}
}