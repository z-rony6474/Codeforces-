#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        even++;
        else
         odd++;
    }

     if(even==1)
      {
         for(i=1;i<=n;i++)
           {
               if(a[i]%2==0)
                break;
           }
           printf("%d\n",i);

      }
      else if(odd==1)
      {
         for(i=1;i<=n;i++)
           {
               if(a[i]%2!=0)
                break;
           }
           printf("%d\n",i);

      }

    return 0;
}
