#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll x,y;
        cin>>x>>y;
        ll q;
        cin>>q;
        while(q--)
        {
            ll x1,y1,c=0;
            cin>>x1>>y1;
            bool f=0;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='R')
                {
                    if(x<x1)
                    {
                        x++;
                        c++;
                    }
                }
                if(s[i]=='L')
                {
                    if(x>x1)
                    {
                        x--;
                        c++;
                    }
                }
                if(s[i]=='U')
                {
                    if(y<y1)
                    {
                        y++;
                        c++;
                    }
                }
                if(s[i]=='D')
                {
                    if(y>y1)
                    {
                        y--;
                        c++;
                    }
                }
                if(x==x1 && y==y1)
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES"<<" "<<c<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
