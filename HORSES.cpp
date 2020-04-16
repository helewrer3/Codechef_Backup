#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T, N, i = 0, diff = 0, s = 1;
    long long int Arry[5000] = {0};
    cin >> T;
	while(T--)
	{
	    cin >> N;
	    N--;
	    i = 0;
	    s = i + 1;
	    while(i <= N)
	    {
	        cin >> Arry[i];
	        i++;
	    }
	    i = 0;
	    sort(Arry, Arry+(N+1));
	    diff = Arry[1] - Arry[0];
	    while(i < N)
	    {
	        s = i + 1;
	        while(s <= N)
	        {
	            if((Arry[s] - Arry[i]) < diff) diff = Arry[s] - Arry[i];
	            s++;
	        }
	        i++;
	    }
	    cout << diff << endl;
	}
}