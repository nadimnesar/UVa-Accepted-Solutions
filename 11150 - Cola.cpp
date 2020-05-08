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
#define yes             cout << "yes" << endl
#define no              cout << "no" << endl
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define EPS             1e-9
#define INF             (1<<30)
#define MOD             10007
#define SIZ             1005

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    while(cin >> n)
    {
        ll cola=n;
        while(1)
        {
            if(n==1)
                break;
            else if(n==2)
                n++;
            else
            {
                cola+=n/3;
                n=(n/3)+n%3;
            }
        }
        cout << cola << endl;
    }
}
