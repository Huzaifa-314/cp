
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t,n,s,r;
    cin >> t;
    while(t--){
        int sum=0;
        cin >>n >> s>> r;
        int a[n];
        a[n-1]=s-r;
        //printing the rest of the number
        for(int i=0;i<n-1;i++){
            if(i==n-2){
                a[i]=r-((r/(n-1))*(n-2));
                if(a[i]>a[0]){
                    a[i]=a[i]-1;
                    a[0]=a[0]+1;
                }
            }else{
                a[i] = r/(n-1);
            }
        }
        //printing the first number(maximum value)
        //cout << s-r << " "<<"\n";
        for(int i=0;i<n;i++){
            cout << a[i]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}