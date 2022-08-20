/*                        Bismillahir Rahmanir Rahim                                    */
/*                                  Start                                               */

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <iomanip>
#include <map>
#include <string.h>
/*                                 [ Define ]                                              */

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
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define l(s)            s.size()
#define asort(a)        sort(a,a+n)
#define all(v)          (v).begin(), (v).end()
#define tcas(t)         while(t--)
#define TESTGO          ll t;cin>>t;while(t--)


#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl
#define ld   long double

/*                                   {loading.......}                                     */

using namespace std;

typedef long long ll;
/*                                   :(Solve                                              */

ll cnt=0,n=4,a,b,c,x,y,p,q,r,sum=0,i,j,maxx=0,minn=999999;


void solve()
{
  ll a[n+1];
  forIn0(a,n);
  asort(a);
  if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
    cout<<"TRIANGLE"<<endl;
  else if(a[0]+a[1]==a[2] || a[1]+a[2]==a[3])
    cout<<"SEGMENT"<<endl;
  else cout<<"IMPOSSIBLE"<<endl;

}
// call..........
int main()
{
    solve();
    ses;
}
/* [ZahidulIslamRoni] */
/*.......(END)......    :)
......(Alhamdulillah)..........*/

