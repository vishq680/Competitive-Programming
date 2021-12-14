#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,i,j,a[1000],f,cnt,cmax;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>k;
        cin>>s;
        f=0;cnt=0;cmax=0;
        for(i=0;i<k;i++)
        {
            if(f==0 && s[i]=='A')
                f=1;
            else if(f==1 && s[i]=='P')
                cnt++;
            else if(f==1 && s[i]=='A')
            {
               cnt=0;
            }
             if(cnt>cmax)
                    cmax=cnt;
        }
        cout<<cmax<<"\n";
    }
}
