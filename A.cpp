#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define sin(s) getline(cin, s)
#define ll long long
#define ull unsigned long long
#define dd double

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    clock_t clk = clock();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = 0;
        for (ll i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    if (i <= k)
                        x = max(x, i);
                }
                else
                {
                    if (i <= k)
                        x = max(x, i);
                    if (n / i <= k)
                        x = max(x, n / i);
                }
            }
        }
        cout << n / x << endl;
    }
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(8) << ((long double)clk) / CLOCKS_PER_SEC << "\n";
    return 0;
}
