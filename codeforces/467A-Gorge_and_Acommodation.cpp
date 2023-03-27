#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n,p,q,aroom=0;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> p>>q;
        if(q-p>=2){
            aroom++;
        }
    }
    cout << aroom;
    return 0;
}