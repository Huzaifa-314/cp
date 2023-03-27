#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int n,k,estart;
    cin >> n>> k;
    if(n%2!=0){
        estart=n/2+2;
    }else{
        estart=n/2+1;
    }
    if(k<estart){
        cout<<2*k-1;
    }else{
        cout<<2*(k-estart+1);
    }
    return 0;
}