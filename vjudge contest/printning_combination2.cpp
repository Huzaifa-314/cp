#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int m=0;m<t;m++){
        int count=0;
        int n;
        cin >> n;
        int stick[n];
        for(int i=0;i<n;i++){
            cin >> stick[i];
        }
        sort(stick, stick + n);
        int x=0,y=x+1,z=y+1;
        while(z<=(n-1) && y<=(n-2) && x<=(n-3))
        {
            if(stick[x]+stick[y]>stick[z]) count++;
            //cout<<x<<" "<<y<< " "<<z<<endl;
            z++;
            if(z>(n-1) && y<(n-2)){
                y++;
                z=y+1;
            }
            if(z>(n-1) && y==(n-2)){
                x++;
                y=x+1;
                z=y+1;
            }
        }
        cout << "Case "<<m+1<<": "<<count<<endl;
    }
    return 0;
}
