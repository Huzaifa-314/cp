#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int x,x1;
    cin >> x;
    x1=ceil((float)x/2);
    if(x%2==0){
        cout << x1;
    }else{
        cout << 0-x1;
    }
    return 0;
}