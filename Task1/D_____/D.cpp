#include<bits/stdc++.h>
using namespace std;

int main()
{ ios_base::sync_with_stdio(false);

    int i,n,x,y,r;cin>>n>>r>>x>>y;
    int c1=0,c2=0;
    string a,b;
    cin.ignore(1, '\n');
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<2*n;i+=2)
    {
        if((a[i]=='1')&&(b[i]=='1'))
            c1++;

        if((a[i]=='1')&&(b[i]=='0'))
            c2++;
    }

    if(c1*x>c2*y)
    cout<<"promoted"<<endl;
    else if(c1*x==c2*y)
    cout<<"no change"<<endl;
    else
    cout<<"demoted"<<endl;
}
