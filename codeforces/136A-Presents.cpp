#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int f[n];
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(f[j]==i){
                cout << j+1<<" ";
            }
        }
    }
    return 0;
}