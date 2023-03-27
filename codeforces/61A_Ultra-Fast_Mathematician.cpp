#include<iostream>
#include<string>
using namespace std;
int main(){
    string n1,n2;
    cin >> n1>>n2;
    int len=n1.length();
    string a="";
    for(int i=0;i<len;i++){
        if(n1[i]!=n2[i]){
            a+="1";
        }
        else{
            a+="0";
        }
    }
    cout << a;
    return 0;
}