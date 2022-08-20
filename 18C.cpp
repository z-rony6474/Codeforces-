// Problem: C. Stripe
// Contest: Codeforces - Codeforces Beta Round #18 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/18/C
// Memory Limit: 64 MB
// Time Limit: 2000 ms
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
  ll n;
  in(n);
  ll a[n+1],C_sum[n+1],ans=0;
  REP(i,0,n)
  in(a[i]),C_sum[i]=a[i];
  REP(i,1,n)
  C_sum[i]=C_sum[i]+C_sum[i-1];
  REP(i,0,n-1)
  if(C_sum[i]==C_sum[n-1]-C_sum[i])
  ans++;
  out(ans);
  nl;
}
int main()
{
    //TESTGO
    answer();
    return 0;
}

//..Alhamdulillah..
