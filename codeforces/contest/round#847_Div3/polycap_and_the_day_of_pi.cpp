#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    string pi="314159265358979323846264338327";
    int t;
    cin >> t;
    int count=0;
    for(int q=0;q<t;q++){
        string inpi;
        cin >> inpi;
        for(int i=0;i<inpi.length();i++){
            if(inpi[i]==pi[i]){
                count++;
            }else{
                break;
            }
        }
        cout << count<<"\n";
        count=0;
    }
    return 0;
}