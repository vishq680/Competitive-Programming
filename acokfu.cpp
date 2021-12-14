#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,v,c,n,m,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>v>>c>>n>>m;
        if( v+c >= n+m )
        {
            f=1;
            if(min(v,c)>=m)
                f=1;
            else
                f=0;
        }
        if(f==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
