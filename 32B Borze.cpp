#include<bits/stdc++.h>
#include<iostream>
#define ci(n) cin>>n
#define co(n) cout<<n
#define new cout<<endl
#define ses return 0
using namespace std;
typedef long long ll;
int main()
{
    string s;
    ci(s);
    ll i=0;
    while(i<s.size())
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<2;i+=2;
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;i+=2;
        }
        if(s[i]=='.') {
            cout<<0;i++;
        }
    }
    new;
    ses;
}
