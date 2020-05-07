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

vs fibn;

class bigint
{
private:
    string c;
public:
    //Add two Integer number
    string Add(string a,string b)
    {
        c.clear();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.length() < b.length())
            swap(a,b);
        while(int(b.length()) < int(a.length()))
            b.push_back('0');
        ll i = 0,carry = 0;
        while(a[i])
        {
            carry = carry + a[i]-48 + b[i]-48;
            c.push_back((carry %10) + 48);
            carry = carry/10;
            i++;
        }
        while(carry > 9)
        {
            c.push_back((carry % 10)+48);
            carry = carry / 10;
        }
        if(carry != 0) c.push_back(carry + 48);
        reverse(c.begin(),c.end());
        return c;
    }
    //Generate Fibonacci numbers
    void fib(string a,string b,long unsigned int n)
    {
        if(n)
        {
            fibn.push_back(a);
            c = Add(a,b);
            fib(b,c,--n);
        }
    }
};

int main()
{
    bigint x;
    ll n;
    x.fib("1","1",5000);
    while(cin >> n)
    {
        cout << fibn[n-1] << endl;
    }
}
