#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    //test case
    while(t--){
        int finalmilse=0;
        int k;
        cin >> k;
        char s[k];
        //taking string input
        cin >> s;
        char init=s[0];
        char pattern[]="FBFFBFFB";
        for(int i=0;i<strlen(pattern);i++){
            int semifinalmilse=0;
            if(pattern[i]==init){
                int milse=1;
                for(int j=1,l=i+1;j<k;j++,l++){
                    if(s[j]!=pattern[l%8]){
                        milse=0;
                        break;
                    }
                }
                if(milse==1){
                finalmilse=1;
                break;
                }
            }
        }
        if(finalmilse==1){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}