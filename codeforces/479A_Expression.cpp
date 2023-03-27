#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b,c,ans;
    cin>>a>>b>>c;
    if(a==1 & b==1 & c==1){
        ans=3;
    }
    else if(a==1){
        ans=(a+b)*c;
    }else if(c==1){
        ans=a*(b+c);
    }
    else if(b==1){
        if(a>c){
            ans=a*(b+c);
        }
        else{
            ans=(a+b)*c;
        }
    }else{
        ans=a*b*c;
    }
    cout << ans;
    return 0;
}