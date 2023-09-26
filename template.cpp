/**---------------------------------------------------------------------

    MUHAMMAD HUZAIFA
    Department of CSE
    International University of Business Agriculture and Technology.
    Dhaka, Bangladesh.

---------------------------------------------------------------------**/
#include "bits/stdc++.h"
#define e '\n'
#define ll long long
#define pb push_back
#define out cout<<
#define in cin>>
#define unsync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define Loop(j,n) for(ll j=0; j<n; j++)
#define Loop1 for(ll i=1; i<=n; i++)
#define Loop11 for(ll i=1; i<n; i++)
#define yes "YES\n"
#define no "NO\n"
#define vll vector<long long>
#define pi 2 * acos(0.0)
#define ld long double
#define deb(x) cout << #x << "=" << x << e
#define deb2(x, y) cout << #x << "=" << x << " , " << #y << "=" << y << e

using namespace std;
int big=1e6+7;
vector <ll> primes;
void sieve();
double LOG(double, double);
bool isprime(ll);
bool istp(ll);
void yn(bool);
int countdigit(long long);

template <typename T> //input vector vin(v);
void vin(vector<T>& v) {
    for (auto& it : v)
        cin >> it;
}

template <typename T> // output vector vout(v);
void vout(const vector<T>& v) {
    for (const auto& it : v)
        cout << it << " ";
    cout << endl;
}

template <typename T, size_t N> //input array ain(a);
void ain(T (&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        cin >> arr[i];
    }
}

template <typename T, size_t N> //output array aout(a);
void aout(const T (&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Utility functions
template <typename T>
void print(T&& t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T&& t, Args &&...args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}

/**-------------------------------------------------------------------**/
/**-------------------------------------------------------------------**/
/** -- BISMILLAHIR RAHMANIR RAHIM -- **/
/**-------------------------------------------------------------------**/
/**-------------------------------------------------------------------**/

void hereitis(int t)
{
    
}

/// main function

int main()
{
    unsync;
    int i=1, t=1;
    //in t;
    while(i<=t) hereitis(i++);
    return 0;
}

void sieve()
{
    bool mark[big];
    mark[0]=mark[1]=true;
    for(ll i=3; i*i<=big; i+=2)
    {
        if(!mark[i])
        {
            for(ll j=i*i; j<=big; j+=i)
            {
                if(j%i==0)mark[j]=true;
            }
        }
    }
    primes.pb(2);
    for(ll i=3; i<=big; i+=2)
    {
        if(!mark[i]) primes.pb(i);
    }
}

double LOG(double base, double number)
{
    return log2(number)/log2(base);
}

bool isprime(ll x)
{
    if(x<2)return false;
    else if(x==2) return true;
    else if(x%2==0)return false;
    else
    {
        for(ll i=3; i*i<=x; i+=2)
        {
            if(x%i==0) return false;
        }
        return true;
    }
}

bool istp(ll x)
{
    ll y=sqrt(x);
    if(y*y==x && isprime(y))return true;
    return false;
}

void yn(bool x)
{
    if(x) yes;
    else no;
}

int countdigit(long long x)
{
    int c=0;
    while(x)
    {
        c++;
        x/=10;
    }
    return c;
}
