/*                        Bismillahir Rahmanir Rahim                                    */
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
#define tcas(t)         while(t--)
#define all(v)          (v).begin(), (v).end()
#define TESTGO          ll t;cin>>t;while(t--)

#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl
#define a_print  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define ld   long double

using namespace std;

typedef long long ll;
/*                                   :(Solve                                              */
bool isPrime=true;
ll prime(ll n)
{
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (ll i = 2; i <= n / 2; ++i)
        {
            if(n%i==0)
            {
                isPrime = false;
                break;
            }
        }
    }
}
template <typename T>
T myMax(T x, T y)
{
    return (x > y)? x: y;
}
bool cmpr(string a, string b)
{
    return a.size()<b.size();
}

bool ck(string a, string b)
{
    if(b.find(a)==-1) return false;
    else return true;
}

void solve()
{
    ll n,x=0;
    ci(n);
    ll a[n+2];
    foR0(n) cin>>a[i];
    asort(a);
    foR0(n)
    {
        if(a[i]!=i+1)
        {
         x=i+1;break;
        }
    }
    if(x==0)x=n+1;
    cout<<x<<endl;



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

