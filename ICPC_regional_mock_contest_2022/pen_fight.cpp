#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t=0;
    //input 1
    cin>>t;
    for(int i=0;i<t;i++){
        //input 2
        int n=0;
        cin >> n;
        // cout << n<< endl;
        int s[n];
        int p[n];
        int frequency[n];
        for(int j=0;j<n;j++){
            p[j]=1;
            s[j]=0;
            frequency[j]=0;
        }
        //input 3
        for(int j=0;j<n;j++){
            cin >>s[j];
            // cout << s[j];
        }
        // cout << endl;
        //input 4
        int q=0;
        cin >>q;
        // cout << q<<endl;
        for(int j=0;j<q;j++){
            int query_nmber;
            cin >> query_nmber;
            // cout << query_nmber;
            if(query_nmber==1){
                int q1_x, q1_y;
                cin >> q1_x>>q1_y;
                // cout << q1_x<< q1_y;
                if(s[q1_x-1]<s[q1_y-1]){
                    int tmpsx=s[q1_x-1];
                    int tmpsy=s[q1_y-1];
                    s[q1_y-1]=tmpsx+tmpsy;
                    s[q1_x-1]=0;
                    int tmppx=p[q1_x-1];
                    int tmppy=p[q1_y-1];
                    p[q1_y-1]=tmppx+tmppy;
                    p[q1_x-1]=0;
                    frequency[q1_x]=q1_y;
                }else{
                    int tmpsx=s[q1_x-1];
                    int tmpsy=s[q1_y-1];
                    s[q1_x-1]=tmpsx+tmpsy;
                    s[q1_y-1]=0;
                    int tmppx=p[q1_x-1];
                    int tmppy=p[q1_y-1];
                    p[q1_x-1]=tmppx+tmppy;
                    p[q1_y-1]=0;
                    frequency[q1_y]=q1_x;
                }
            }
            else if(query_nmber==2){
                int q2_x_main_pen;
                cin >> q2_x_main_pen;
                // cout<<q2_main_pen;
                cout << p[q2_x_main_pen-1]<<endl;
            }else{
                int q3_x_main_index;
                cin >> q3_x_main_index;
                // cout<< q3_main_index;
                cout << frequency[q3_x_main_index]<< endl;
            }
            // cout << endl;
        }

    }
    return 0;
}
    