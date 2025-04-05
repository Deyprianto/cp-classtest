#include<bits/stdc++.h>
using namespace std ;
void totient(int n)
{
    int ans = n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n = n/i;
            }
            ans  = ans*(i-1)/i;
        }
    }
    if(n>1) ans = ans*(n-1)/n;

    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    totient(n);
}
