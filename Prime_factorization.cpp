#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"Enter a number";
    cin >> n;

    while(n%2==0)
    {
        cout <<2<<" ";
        n = n/2 ;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            cout <<i<<" ";
            n = n/i;
        }
    }
    if(n>1) cout <<n;

    return 0;
}
