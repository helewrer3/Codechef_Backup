#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int A, B, N, i;
    cin >> A >> B;
    N = abs(A - B);
    i = N/10;
    i = i*10 + 1;
    if(i == N) i++;
    cout << i;
}