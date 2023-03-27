#include<iostream>
#include<cmath>
using namespace std;
bool istriangle(int a,int b,int c){
    double s=(double)(a+b+c)/2;
    double area = (double)sqrt(s*(s-a)*(s-b)*(s-c));
    if(area>0){
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
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
        int x=0,y=x+1,z=y+1;
        while(z<=n && y<=(n-1) && x<=(n-2))
        {
            if(istriangle(stick[x],stick[y],stick[z])) count++;
            z++;
            if(z>n && y<(n-1)){
                y++;
                z=y+1;
            }
            if(z>n && y==(n-1)){
                x++;
                y=x+1;
                z=y+1;
            }
        }
        cout << "Case "<<m+1<<": "<<count<<endl;
    }
    return 0;
}