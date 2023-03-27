#include<iostream>
using namespace std;
int main(){
    int n,opnion;
    bool easy=true;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> opnion;
        if(opnion==1){
            easy=false;
            break;
        }
    }
    if(easy){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}