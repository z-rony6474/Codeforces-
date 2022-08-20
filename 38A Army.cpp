/*Bismillahir Rahmanir Rahim*/
/*Start*/
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#define                 ci(n) cin>>n
#define                 co(n) cout<<n
#define                 new cout<<endl
#define                 ses return 0

#define foR0(num)       for(ll i = 0; i < num; i++)
#define foR1(num)       for(ll i = 1; i <= num; i++)
#define foRev(num)      for(ll i = num - 1; i >= 0; i--)
#define forIn0(arr,num)  for(ll i = 0; i < num; i++) ci(arr[i]);
#define forIn1(arr,num) for(ll i = 1; i <= num; i++) ci(arr[i]);
#define pb              push_back
#define l(s)            s.size()
#define asort(a)        sort(a,a+n)
#define tcas(t)         while(t--)

#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl

using namespace std;

typedef long long ll;
int main()
{
    ll tc;
    ci(tc);
    ll a[tc+5];
    for(ll i=1;i<=tc-1;i++)
    {
        cin>>a[i];
    }
    ll n,m,s=0;
    cin>>n>>m;
    for(ll j=n;j<m;j++)
    {
        s+=a[j];
    }
   co(s);
   new;

    ses;
}

