#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long mul=1;
    int n;
    string f;
    cin >>n>>f;
    int k=f.length();
    if(n%k!=0)
    {
        for(int i=0;;i++)
        {
            int current = (n-(i*k));
            mul = mul * current;
            if(current == n%k)
            {
                break;
            }

        }
    }else
    {
        for(int i=0;;i++)
        {
            int current = (n-(i*k));
            mul = mul * current;
            if(current == k)
            {
                break;
            }

        }
    }
    cout << mul;

    return 0;
}
