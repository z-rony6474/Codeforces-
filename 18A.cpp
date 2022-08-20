// Problem: A. Triangle
// Contest: Codeforces - Codeforces Beta Round #18 (Div. 2 Only)
// URL: https://codeforces.com/contest/18/problem/A
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
  ll x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  ll a[4],c=1;
  a[0]=y1; a[1]=y2; a[2]=y3;
  sort(a,a+3);
  REP(i,0,2)
  {
  	if(a[i]==a[i+1])c++;
  }
  if(c!=2)
  {
  	cout<<"NEITHER";nl;
  }
  else
  {
  	if(y1==y2 && (x3==x1||x3==x2))
  	{
  		cout<<"RIGHT";nl;
  	}
  	else if(y2==y3 &&( x1==x2||x1==x3))
  	{
  		cout<<"RIGHT";nl;
  	}
  	else if(y1==y3 && (x2==x1||x2==x3))
  	{
  		cout<<"RIGHT";nl;
  	}
  	else
  	{
  		cout<<"ALMOST";nl;
  	}
  }
}
int main()
{
    //TESTGO
    answer();
    return 0;
}

//..Alhamdulillah..