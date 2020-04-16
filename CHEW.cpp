#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int N, K, s = 0, p = 0, i = 0;
    cin >> N >> K;
    long long int Arry[N] = {0};
    N -= 1;
    while(s <= N)
    {
        cin >> Arry[s];
        s++;
    }
    sort(Arry, Arry+(N+1));
    if(Arry[0] < K-1)
    {
        long long int Left, Right, Mid;
		while(i <= (N-1))
		{
			Left = i + 1; Right = N; Mid = (Left + Right)/2;
			if(Arry[i] + Arry[i+1] < K)
			{
				while(Left <= Right)
				{
					Mid = (Left + Right)/2;
					if(Arry[Mid] + Arry[i] < K)
					{
						if((Mid != N)&&(Arry[Mid+1] + Arry[i] < K)) Left = Mid+1;
						else
						{
							p += (Mid - i);
							break;
						}
					}
					else if(Arry[Mid] + Arry[i] >= K) Right = Mid-1;
				}
			}
			else break;
			i++;
		}
        cout << p;
    }
    else cout << 0;
} 