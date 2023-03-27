#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(1);
    int n;
    cin >> n;
    int c[n];
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    sort(c,c+n);
    int ccount=0;
    int ctotal=0;
    int btotal=0;
    for(int i=n-1;i>-1;i--){
        ctotal+=c[i];
        ccount++;
        for(int j=0;j<i;j++){
            btotal+=c[j];
        }
        if(ctotal>btotal){
            break;
        }
        btotal=0;
    }
    cout << ccount;
    return 0;
}