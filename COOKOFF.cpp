#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long int T,N;
	string diff;
	cin >> T;
	while(T != 0)
	{
	    int c = 0, s = 0, e = 0, emm = 0, mhh = 0;
	    cin >> N;
	    while(N > 0)
	    {
	        cin >> diff;
	        if(diff == "cakewalk") c++;
	        else if(diff == "simple") s++;
	        else if(diff == "easy") e++;
	        else if(diff == "easy-medium"||diff == "medium") emm = 1;
	        else if(diff == "medium-hard"||diff == "hard") mhh = 1;
	        N--;
	    }
	    if((c == 1) && (s == 1) && (e == 1) && (emm == 1) && (mhh = 1))
        {
            cout << "Yes";
        }
        else cout << "No";
		T--;
	}
	return 0;
}
