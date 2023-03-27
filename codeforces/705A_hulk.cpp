#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    string f[2]={"love","hate"};
    string a;
    cin>>n;
    for(int i=0,j=1;i<n;i++,j++){
        if(i!=(n-1)){
            a+="I "+f[j%2] +" that ";
        }
        else{
            a+="I "+f[j%2] +" it";
        }
    }
    cout << a;
    return 0;
}