#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll bitwiseor(ll a,ll b)
    { 
    if (a==b)
     return a; 
    ll final = 0;
     ll rev = 0; 
    while(b)
     { 
        final*=2; 
        if (a%2==1 || a != b)
         final++;
         a/=2; b/=2; 
        } 
    while(final)
        { 
        rev *= 2;
         rev += final % 2;
         final/=2;
         }
    return rev; 
    }
int main() 
{ 
    ll t;
    cin>>t;
    while(t-->0)
    {
        ll l,r;
        cin>>l>>r;
        cout<<bitwiseor(l,r)<<endl;
    }
    return 0; 
}