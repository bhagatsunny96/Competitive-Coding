
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long int 
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define test long long int t; cin>>t; while(t-->0)
#define fIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(n) for(long long int i=0;i<n;i++)
using namespace std;
ll gcd(ll a, ll b)
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)  
 {  
    return (a*b)/__gcd(a, b);  
 }
 ll power(ll x, unsigned ll y) 
 { 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
 }
 bool isPrime(ll num)
 {
    bool flag=true;
    for(ll i =2;i<=num/2;i++) 
    {
       if(num%i==0) 
       {
          flag=false;
          break;
       }
    }
    return flag;
}
bool isPalin(ll num)
{
    bool flag=false;
    ll digit,rev=0,n=num;
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if(rev==n)
     flag=true;
     return flag;
}
ll sumofdigits(ll n)
{
    ll c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
bool sortinrev(const pair<int,int>&a,const pair<int,int>&b) 
{ 
    return (a.first > b.first); 
}
int main() 
{
    fIO
    test
    {
        ll n,max=0,min=109;
        cin>>n;
        ll a[n];
        ll p=-1,q=-1;
        loop(n)
        {
            cin>>a[i];
        }
        loop(n)
        {
            if(a[i]>=max)
            {
                max=a[i];
                p=i;
            }
        }
        loop(n)
        {
            if(a[i]<=min)
            {
                min=a[i];
                q=i;
            }
        }
        if(p<=q)
        cout<<max<<" "<<min<<endl;
        else
        cout<<min<<" "<<max<<endl;
    }
	return 0;
}
