#include<bits/stdc++.h>
using namespace std;

#define YES             cout<<"YES"<<endl
#define NO              cout<<"NO"<<endl
#define sin(s)	        getline(cin,s)
#define ll              long long
#define ull             unsigned long long
ll GCD(ll a,ll b)
{
    if(a%b==0)
    {
        return b;
    }
    return GCD(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    clock_t clk = clock();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll p=100000000000;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
            p=min(p,x);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ll m=GCD(v[i],v[j]);
                if (m==p)
                {
                    if(v[i]>v[j])
                        swap(v[i],v[j]);
                }
            }
        }
        bool f=0;
        for(int i=1; i<n; i++)
        {
            if(v[i-1]<=v[i])
            {
                continue;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(8) << ((long double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}
