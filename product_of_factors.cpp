#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int total = 1;
    int num = n;

    for(int i=2;i<=sqrt(n);i++)
    {
        int count = 0;
        while(n%i==0)
        {
            count ++;
            n = n/i;
        }
        total = total*(count+1);
    }
    if(n>1) total = total*2;

    cout <<total<<"\n";

    int product_factors = pow(num,total/2);

    cout<<product_factors;
}


