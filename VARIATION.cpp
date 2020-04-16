#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int N, K, s = 0, i = 1,p = 0;
	cin >> N >> K;
    long long int arry[N] = {0};
    N--;
    s = 0;
    while(s <= N)
    {
        cin >> arry[s];
        s++;
    }
    s = 0;
    sort(arry,arry+(N + 1));
    while(s <= (N-1))
    {
        i = s+1;
        while(i <= N)
        {
            if(abs(arry[s] - arry[i]) >= K){p += N - i + 1; break;}
            i++;
        }
        s++;
    }
    cout << p;
} 