*\
  1
 32
456
\*
#include <stdio.h>
#include<iostream>
using namespace std; 
   int main()
{     int n,i,j,a;
     int k=1; 
      cout <<"enter number of row";
       cin >> n;
       for(i=1;i<=n;i++)
       {
           for(a=n;a>i;a--)
           {
               cout<<" ";
           }
       

    for(j=1;j<=i;j++)
         {cout<<k;
          k++;
         }
          
          cout << endl;
       }
          
          return 0;
          } 

