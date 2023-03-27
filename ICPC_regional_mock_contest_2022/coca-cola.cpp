#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t,m,n,k;
    cin >> t;
    for(int i=0,j=1;i<t;i++,j++){
        cin >>m>>n>>k;
        if((m/k)>=n){
        cout << "Case "<<j<<": Yes\n";
        }else{
        cout << "Case "<<j<<": No\n";
        }
    }
    
    return 0;
}