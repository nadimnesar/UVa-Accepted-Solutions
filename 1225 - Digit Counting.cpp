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
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n] = {0};
        int arr[10] = {0};
        for(int i=1; i<=n; i++)
        {
            a[i]=i;
            while(a[i])
            {
                arr[a[i]%10]++;
                a[i]/=10;
            }
        }
        for(int i=0; i<=9; i++)
        {
            if(i==9)
                cout << arr[i] << endl;
            else cout << arr[i] << " ";
        }
    }
}
