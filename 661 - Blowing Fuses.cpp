#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define pb              push_back
#define all(x)          x.begin(), x.end()
#define all(y)          y.begin(), y.end()
#define PI              acos(-1.0)
#define MAX             1000001
#define MOD             10000007

int main()
{
    ll int cn = 0;
    while(1)
    {
        ll int n, m, c, temp, maxi = 0, volt = 0;
        scanf("%lld %lld %lld", &n, &m, &c);
        if(n + m + c == 0) break;
        vector< pair < ll int, bool > > elec;
        while(n--)
        {
            scanf("%lld", &temp);
            elec.pb( { temp, false } );
        }
        while(m--)
        {
            scanf("%lld", &temp);
            if(!elec[temp-1].second)
            {
                volt += elec[temp-1].first;
                elec[temp-1].second = true;
            }
            else
            {
                volt -= elec[temp-1].first;
                elec[temp-1].second = false;
            }
            maxi = max(maxi, volt);
        }
        printf("Sequence %lld\n", ++cn);
        if(maxi > c)
            printf("Fuse was blown.\n\n");
        else printf("Fuse was not blown.\nMaximal power consumption was %lld amperes.\n\n", maxi);
        elec.clear();
    }
}
