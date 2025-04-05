#include<bits/stdc++.h>
using namespace std ;
void sieve(int n)
{
    bool prime[n+1];

    for(int i=0;i<=n;i++)
    {
        prime[i]= true;
    }
    prime[0]=prime[1]=false;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
}

