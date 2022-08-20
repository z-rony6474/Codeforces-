// Problem: A. Increasing Sequence
// Contest: Codeforces - Codeforces Beta Round #11
// URL: https://codeforces.com/problemset/problem/11/A
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//Bismillahir Rahmanir Rahim    
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <numeric>
#include <random>
#include<bits/stdc++.h>

#define in(n)           cin>>n
#define out(n)          cout<<n
#define nl              cout<<endl
#define REP(i,a,b)      for(ll i=a;i<b;i++) 
#define REV(i,a,b)      for(ll i=a;i>=b;i--)
#define pb              push_back
#define asort(a)        sort(a,a+n)
#define all(v)          (v).begin(), (v).end()
#define TESTGO          ll t;cin>>t;while(t-- >0)
#define no              cout << "NO" <<endl
#define yes             cout << "YES" <<endl
#define a_print         for(ll i=0;i<n;i++){cout<<a[i]<<" ";}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

void answer()
{
  ll n,m,ans=0;
  cin>>n>>m;
  ll a[n+1];
  REP(i,0,n){
      in(a[i]);
  }
  REP(i,1,n)
  {
  	if(a[i]<=a[i-1])
  	{
  		ll x=ceil(float((a[i-1]-a[i])+1)/m);
  		if((a[i-1]-a[i])<m)x=1;
          ans+=x;
          a[i]+=x*m;
  	}
  }
  cout<<ans<<endl;


}
int main()
{
    //TESTGO
    answer();
    return 0;
}

//..Alhamdulillah..
