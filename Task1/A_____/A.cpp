#include<bits/stdc++.h>
using namespace std;

int main()
{ ios_base::sync_with_stdio(false); // for fast input/output

 int n,c=0,i,j;
 cin>>n;           // taking the length of string
 string s,a,b;
 cin>>s;           // taking the string

 for(i=0;i<n;i++)
 {if(s[i]=='1')c++;} // counting the number of '1' in the string

 if((c==n)||(s=="0")) // if the string contains only 1 then cout<<"-1"<<endl;
 cout<<"-1"<<endl;
 else
 {
     for(i=n-1;i>=0;i--)  // subtracting 1 from string
     {
         if(s[i]=='1')
         break;
     }
     for(j=0;j<i;j++)
     a.push_back(s[j]);

     a.push_back('0');
     for(j=i+1;j<n;j++)
     a.push_back('1');

     i=0;j=0;
     for(i=n-1;i>=0;i--)  // adding 1 to the string
     {
         if(s[i]=='0')
         break;
     }
     for(j=0;j<i;j++)
     b.push_back(s[j]);


     b.push_back('1');
     for(j=i+1;j<n;j++)
     b.push_back('0');

     cout<<a<<" "<<b<<endl;
 }
}
