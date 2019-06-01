#include<bits/stdc++.h>
using namespace std;
int c=0;    // counter to count the number of non - leaf nodes

int fun(string s)   // forming a recursion tree
{  if(s.size()==1)
   return c;
   else
   {
    string s1,s2;
    int i;
    for(i=0;i<(s.size())/2;i++)
     s1.push_back(s[i]);

    for(i=(s.size())/2;i<s.size();i++)
    s2.push_back(s[i]);


   if(s1==s2)      // comparing the decomposed parts
    { c++;
      fun(s1);
      fun(s2);
    }

    return c;
   }
}
int main()
{  ios_base::sync_with_stdio(false);

  int n,t;
  cin>>n;           // taking the length of string
  string s;
  cin>>s;           // taking the string

/* height of the tree will give the degree of
   symmetry of the string */

  t=fun(s);
  cout<<log2(t+1)<<endl; // printing the degree of symmetry
}
