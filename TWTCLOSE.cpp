#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int T;

    //Variables
	int N;
	int x;
	int result;
	char str[15];

	scanf("%d", &N);
    scanf("%d", &T);
    int Arr[N] = {0};

    while(T)
    {
        //Input
		scanf("%s", str);
		result = 0;


        //Process
		if(!strcmp(str, "CLICK"))
		{
			scanf("%d", &x);
			if(Arr[x-1] == 0)
				Arr[x-1] = 1;
			else
				Arr[x-1] = 0;
		}
		else if(!strcmp(str, "CLOSEALL"))
		{
			for(int i = 0; i < N; i++)
				Arr[i] = 0;
		}

        //Output
		for(int i = 0; i < N; i++)
			if(Arr[i] == 1)
			    result++;

		printf("%d\n", result);

		T--;
    }
    return 0;
}
