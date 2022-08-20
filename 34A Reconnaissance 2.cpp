#include<bits/stdc++.h>
#define co(n) cout<<n
#define ci(n) cin>>n
#define ed cout<<endl
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,min=10001,j,c;
    ci(t);
    ll a[t+10];
    ll b;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    min=10009;
    ll k,l;
    for(i=0; i<t; i++)
    {
      if(min>abs(a[i+1]-a[i]))
      {
          min=abs(a[i+1]-a[i]);
          k=i+1;
          l= i;
      }
    }
    if(t==2)
    {
        cout<<1<<" "<<2<<endl;
    }
    else if(min>abs(a[t-1]-a[0]))
        cout<<1<<" "<<t<<endl;
    else
    {
        cout<<l+1<< " "<<k+1<<endl;
    }


}
