#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int te,n,i,j,f,k,cnt,ans,c0t,ans1;
    string s,t;
    t="abacaba";
    cin>>te;
    while(te--)
    {
        cin>>n;
        cin>>s;
        j=0;k=0;f=0;cnt=0;c0t=0;
        for(i=0;i<n;i++)
        {
            f=0;
            if(s[i]=='a' || s[i]=='?')
            {
                for(j=i;j<i+7 && j<n;j++)
                {
                    if(s[j]==t[j-i])
                    {
                        if(f==2)
                        {
                            f=2;
                            continue;
                        }
                        else
                        {
                            f=1;
                            continue;
                        }
                    }
                    if(s[j]=='?' && cnt==0)
                        f=2;
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
             if(j-i==6 && f==1)
            {
                cnt++;
                ans=i;
            }
            else if(j-i==6 && f==2)
            {
                cnt++;
                c0t++;
                ans1=i;
            }
        }
        k=0;
        if(cnt==1)
        {
            cout<<"YES"<<"\n";
            if(c0t==1)
                ans=ans1;
            for(i=0;i<n;i++)
            {
                if(i==ans-1)
                {
                    for(j=0;j<7;j++)
                    {
                         cout<<t[j];
                         i++;
                    }
                }
                else
                {
                    if(s[i]=='?')
                        cout<<'d';
                    else
                        cout<<s[i];
                }
            }
            cout<<"\n";
        }
        else if(cnt==c0t+1)
        {
            cout<<"YES"<<"\n";
            for(i=0;i<n;i++)
            {
                    if(s[i]=='?')
                        cout<<'d';
                    else
                        cout<<s[i];
            }
            cout<<"\n";
        }
        else
            cout<<"NO"<<"\n";


        s="";
    }
}



