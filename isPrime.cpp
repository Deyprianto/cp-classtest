#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    if(n==0||n==1)
    {
        cout <<"Not prime";
        return 0;
    }
     bool isprime = false ;

     for(int i=2;i<=sqrt(n);i++)
     {
         if(n%i==0)
         {
             isprime = true;
             break;
         }
     }
     if(isprime)
     {
         cout<<"Not prime";
     }
     else{
        cout <<"prime";
     }
}


