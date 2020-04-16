#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	int N;
	int goal_scr = 20;
	int foul_scr = -10;
	int max_scr;
	int temp_scr;
	cin >> T;
	while(T)
	{
		max_scr = 0;
		temp_scr = 0;
		cin >> N;
		int A[N];
		for(int i = 0; i < N; i++)
			cin >> A[i];
		int B[N];
		for(int i = 0; i < N; i++)
			cin >> B[i];
		max_scr = goal_scr*A[0] + foul_scr*B[0];
		for(int i = 1; i < N; ++i)
		{
			temp_scr = goal_scr*A[i] + foul_scr*B[i];
			if(temp_scr > max_scr)
				max_scr = temp_scr;
		}
		max_scr = max(max_scr, 0);
		cout << max_scr << endl;
		T--;
	}
	return 0;
}