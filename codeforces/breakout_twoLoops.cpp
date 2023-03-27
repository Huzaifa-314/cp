#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int breakloop=false;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1){
                breakloop=true;
                break;
            }
            cout << i << j << "\n";
            
        }
        if(breakloop){
            break;
        }
    }
    return 0;
}