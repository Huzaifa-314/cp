#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int g=1;
    string pre,cur;
    cin >> pre;
    for(int i=1;i<n;i++){
        cin >> cur;
        if(cur!=pre){
            g++;
            pre=cur;
        }
    }
    cout << g;
    return 0;
}