#include<iostream>
#include<string>
using namespace std;
string easyhard(){
    int n,opnion;
    string ans="EASY";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> opnion;
        if(opnion==1){
            ans="HARD";
            return ans;
        }
    }
    return ans;
}
int main(){
    cout << easyhard();
    return 0;
}