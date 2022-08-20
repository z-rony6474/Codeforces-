/*                        Bismillahir Rahmanir Rahim                                    */
/*                                  Start                                               */

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <iomanip>
#include <map>
#include <manipulations.h>
#include <string.h>
#include <structuredquerycondition.h>

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
#define l(s)            s.size()
#define asort(a)        sort(a,a+n)
#define tcas(t)         while(t--)

#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl
/*                                   {loading.......}                                     */

using namespace std;

typedef long long ll;
/*                                   :(Solve                                              */
void solve()
{
    ll n,c,x,ans=0;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        x=i;c=0;
        for(ll j=2;j*j<=x;j++)
        {
            if(x%j==0)
            {
                c++;
                while(x%j==0)
                {
                    x/=j;
                }
            }
        }
        if(x>1)c++;
        if(c==2)
            ans++;
    }
    cout<<ans<<endl;

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

