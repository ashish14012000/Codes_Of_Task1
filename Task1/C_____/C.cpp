#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(false);

    int a,b,c;
    int t1,t2,t3,t4;
    int p,q,r,s;
    int A[6]={10,8,7,16,9,43}; // given set of elements
    int i,j,k=1;
    vector<int> v1,v;
    vector< pair<int,int> > v2; /* for storing the positions i and j
                                (as the product A[i]*A[j] is provided in the input) */

    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        v1.push_back(A[i]*A[j]);
    }
    for(i=0;i<6;i++)
    {  for(j=i+1;j<6;j++)
      v2.push_back(make_pair(i,j));
    }

    cout<<"0"<<" "<<"1"<<endl;
    cin>>t1;
    cout<<"1"<<" "<<"2"<<endl;
    cin>>t2;

    for(i=0;i<15;i++)
    {
       if(t1==v1[i])
        break;
    }
    for(j=0;j<15;j++)
    {
       if(t2==v1[j])
        break;
    }
    p=v2[i].first;q=v2[i].second;
    r=v2[j].first;s=v2[j].second;

    if(p==r)
    {a=q;b=p;c=s;}
    else if(p==s)
    {a=q;b=p;c=r;}
    else if(q==r)
    {a=p;b=q;c=s;}
    else if(q==s)
    {a=p;b=q;c=r;}

    v.push_back(A[a]);
    v.push_back(A[b]);
    v.push_back(A[c]);


    cout<<"3"<<" "<<"4"<<endl;
    cin>>t3;
    cout<<"4"<<" "<<"5"<<endl;
    cin>>t4;

    for(i=0;i<15;i++)
    {
       if(t3==v1[i])
        break;
    }
    for(j=0;j<15;j++)
    {
       if(t4==v1[j])
        break;
    }

    p=v2[i].first;q=v2[i].second;
    r=v2[j].first;s=v2[j].second;

    if(p==r)
    {a=q;b=p;c=s;}
    else if(p==s)
    {a=q;b=p;c=r;}
    else if(q==r)
    {a=p;b=q;c=s;}
    else if(q==s)
    {a=p;b=q;c=r;}

    v.push_back(A[a]);
    v.push_back(A[b]);
    v.push_back(A[c]);

    for(i=0;i<6;i++)
    cout<<v[i]<<" "; // printing the final guessed array

    cout<<endl;
}
