#include <bits/stdc++.h>
using namespace std;
#define ll              long long int
#define vi              vector< int >
#define vll             vector< ll >
#define vc              vector< char >
#define vs              vector< string >
#define pb              push_back
#define all(v)          v.begin(), v.end()
#define PI              acos(-1.0)  // 3.1415926535897932

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y, a, b;
        cin >> x >> y;
        a=(x+y)/2;
        b=(x-y)/2;
        if(a<0 || b<0)
            cout << "impossible" << endl;
        else if(x==(a+b) && y==(a-b))
            cout << a << " " << b << endl;
        else
            cout << "impossible" << endl;
    }
}
