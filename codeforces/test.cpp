#include <bits/stdc++.h>
    using namespace std;
    int main() 
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,s,r,i;
            cin>>n>>s>>r;
            int a[n];
            int t=n;
            for(i=0;i<n;i++)
            {
                if(i==0)
                {
                    a[i]=s-r;
                    s=s-a[i];
                    t=t-1;
                }
                else
                {
                    a[i]=s/t;
                    s=s-a[i];
                    t=t-1;
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            
        }
    }