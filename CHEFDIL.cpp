#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    //Variables
    string str;
    int count_1;

    while(T)
    {
        //Input
        cin >> str;
        count_1 = 0;

        //Process
        for(int i = 0; i < str.size(); i++)
            if(str[i] == '1')
                count_1++;

        //Output
        if(count_1%2 == 0)
            printf("LOSE");
        else
            printf("WIN");

        printf("\n");
        T--;
    }
    return 0;
}
