#include<bits/stdc++.h>

using namespace std;

long long int T = 0, N = 0, K = 0, E = 0, M = 0, i = 0, r = 0, x = 0, o = 0, ok = 0, score[10011] = {0};

int main()
{
	cin >> T;
	while(T--)
	{
		N = 0, K = 0, E = 0, M = 0, i = 0, r = 0, x = 0;
		cin >> N;
		cin >> K;
		cin >> E;
		cin >> M;
		while(i < (N-1))
		{
		    r = 0;
			while(r < E)
			{
				cin >> x;
				score[i] += x;
				r++;
			}
			i++;
		}
		o = N-1;
		ok = N - K - 1;
		sort(score, score+(o));
		r = 0;
		while((r < E-1) && (E > 0))
		{
			cin >> x;
			score[o] += x;
			r++;
		}
		if((score[o] > score[o-1]) || (score[o] > score[ok]))
		{
		    cout << 0 << endl;
		}
		else if(score[ok] == E*M)
		{
		    cout << "Impossible" << endl;
		}
		else if(((score[ok] - score[o]) <= M) && ((score[ok] - score[o]) >= 0))
		{
			cout << (score[ok] - score[o]) + 1 << endl;
		}
		else cout << "Impossible" << endl;
		i = 0;
        while(i < N)
        {
            score[i] = 0;
        	i++;
        }
	}
}
