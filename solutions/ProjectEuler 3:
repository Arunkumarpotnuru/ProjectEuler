#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        
        
        long long ans = 2;
        long long a = 1;
        long long b = 2;
        
        while(true)
        {
            long long c = a+b;
            a = b;
            b = c;
            if(b>n) break;
            if(b%2 == 0) ans += b;
        }
        cout<<ans<<endl;
    }
}
