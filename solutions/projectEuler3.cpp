#include<bits/stdc++.h>
using namespace std;
void largestPrimeFactor(long long n,long long &ans)//don't forget to pass ans as refrence
{
    while(n%2==0)
    {
        ans = 2;
        n = n/2;
    }
    while(n%3==0)
    {
        ans = 3;
        n = n/3;
    }
    for(int i=5;i<=sqrt(n);i=i+6) // i got TLE when i wrote i*i<=n but got accepted when i wrote i<=sqrt(n) , as of now i don't know why.
    {
        while(n%i == 0)
        {
            ans = i;
            n = n/i;
        }
        while(n%(i+2)==0)
        {
            ans = i+2;
            n = n/(i+2);
        }
    }
    if(n>3) ans = n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        
        long long ans = 1;// largerst prime factor will be stored in ans variablel
        largestPrimeFactor(n,ans);
        cout<<ans<<endl;
    }
}
