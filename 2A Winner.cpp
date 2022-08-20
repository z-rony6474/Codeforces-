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
    ll t;
    ci(t);
    vector<pair<string,int>>v;
    unordered_map<string,int>m;
    while(t--)
    {
        string s;
        ci(s);
        ll n;
        ci(n);
        m[s]+=n;
        v.pb({s,n});
    }
    int mx=INT_MIN;
    for(auto it : m)
    {
       mx=max(mx,it.second);
    }
    unordered_map<string,int>mp;
    for(auto i : v)
    {
        mp[i.first]+=i.second;
        if(mp[i.first]>=mx && m[i.first]==mx)
        {
          co(i.first);
          break;
          new;
        }
    }

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

