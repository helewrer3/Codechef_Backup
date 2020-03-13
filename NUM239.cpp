#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    //Variables
    long int L;
    long int R;
    long int result;

    while(T)
    {
        //Input
        scanf("%ld", &L);
        scanf("%ld", &R);
        result = 0;

        //Process
        for(int i = L; i <= R; i++)
            if(i%10 == 2 || i%10 == 3 || i%10 == 9)
                result++;

        //Output
        printf("%ld\n", result);

        T--;
    }
    return 0;
}
