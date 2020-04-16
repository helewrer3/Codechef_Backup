#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, flag;
    long long int N, K, p;
    scanf("%d", &T);

    while(T)
    {
        //Input
        scanf("%lld", &N);
        scanf("%lld", &K);
        //int Arr[K] = {};
        //p = 0;
        //flag = 1;

        //Process
        /*for(int i = 1; i <= N/K; ++i)
        {
            Arr[p] += K;

            if(Arr[p] != N/K)
            {
                flag = 0;
                if(N/K < K)
                    break;
            }
            else
                flag = 1;

            if(p == K-1)
                p = 0;
            else
                p++;
        }*/

        //Output
        if((N/K)%K == 0)
            printf("NO");
        else if((N/K)%K != 0)
            printf("YES");
        cout << '\n';

        T--;
    }
    return 0;
}
