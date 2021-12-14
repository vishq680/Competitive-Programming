#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a[3];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[1]!=a[2])
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            if(a[0]==1)
                cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<"\n";
            else
                cout<<a[2]<<" "<<a[0]<<" "<<a[0]-1<<"\n";
        }
    }
}
