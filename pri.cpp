
#include<bits/stdc++.h>
using namespace std;
vector<int>p;
bitset<10000005>bs;
bool ar[1000005];


bool isprime(long long x)
{
    if(x<=10000005)
    {
        return bs[x];
    }
    for(long long i=0; i<p.size(); i++)
    {
        if(x%p[i]==0)
        {
            return false;
        }
    }
    return true;
}


void seive(long long n)
{
    long long i,j;
    bs.set();
    bs[0]=bs[1]=0;
    for(i=4; i<=n; i+=2)
    {
        bs[i]=0;
    }
    for(i=3; i*i<=n; i+=2)
    {
        if(bs[i])
        {
            for(j=i*i; j<=n; j=j+(2*i))
            {
                bs[j]=0;
            }
        }
    }
    if(isprime(n))
    {
        cout << n << " is a Prime Number.";
    }
    else
    {
        cout << n << " is not a Prime Number.";
    }
}

int main()
{
    long long n;
    cin>>n;
    seive(n);
}




/***************************


#include<bits/stdc++.h>
using namespace std;
vector<int>p;
bitset<10000005>bs;
bool ar[1000005];


bool isprime(long long x)
{
    if(x<=10000005)
    {
        return bs[x];
    }
    for(long long i=0; i<p.size(); i++)
    {
        if(x%p[i]==0)
        {
            return false;
        }
    }
    return true;
}


void seive()
{
    long long i,j;
    bs.set();
    bs[0]=bs[1]=0;
    for(i=4; i<=1000005; i+=2)
    {
        bs[i]=0;
    }
    for(i=3; i*i<=1000005; i+=2)
    {
        if(bs[i])
        {
            for(j=i*i; j<=1000005; j=j+(2*i))
            {
                bs[j]=0;
            }
        }
    }
}
int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        if(isprime(a))
        {
            cout<<a<<" is a prime number."<<endl;
        }
        else
        {
            cout<<a<<" is not a prime number."<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string s;
        stack<string>s1;
        stack<string>s2;
        s1.push("http://www.lightoj.com/");
        cout<<"Case "<<c++<<":"<<endl;
        while(cin>>s)
        {
            if(s=="QUIT")
            {
                break;
            }
            else if(s=="VISIT")
            {
                cin>>s;
                s1.push(s);
                cout<<s<<endl;
                while(!s2.empty())
                {
                    s2.pop();
                }
            }
            else if(s=="BACK")
            {
                s2.push(s1.top());
                s1.pop();
                if(!s1.empty())
                {
                    cout<<s1.top()<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                    s1.push(s2.top());
                    s2.pop();
                }
            }
            else if(s=="FORWARD")
            {
                if(s2.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    s1.push(s2.top());
                    cout<<s2.top()<<endl;
                    s2.pop();
                }
            }
        }
    }
    return 0;
}





int id,m;
struct node
{
    bool mark;
    node* next[11];
    node()
    {
        mark=false;
        for(int i=0; i<10; i++)
        {
            next[i]=NULL;
        }
    }
};
node* root=NULL;

void Insert(string s)
{
    int nay=0;
    node* newnode=root;
    for(int i=0; i<s.size(); i++)
    {
        int id=s[i]-'0';
        if(newnode->next[id]==NULL)
        {
            nay=1;
            newnode->next[id]=new node();
        }
        if(newnode->mark==1)
        {
            m=0;
        }
        newnode=newnode->next[id];
    }
    if(nay==0)
    {
        m=0;
    }
    newnode->mark=1;
}

bool Search(string s)
{
    node* newnode=root;
    for(int i=0; i<s.size(); i++)
    {
        int id=s[i]-'0';
        if(newnode->next[id]==NULL)
        {
            return false;
        }
        newnode=newnode->next[id];
    }
    return newnode->mark;
}

void del(node* newnode)
{
    for(int i=0; i<10; i++)
    {
        if(newnode->next[i])
        {
            del(newnode->next[i]);
        }
    }
    delete(newnode);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        m=1;
        root =new node();
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            Insert(s);
        }
        if(m==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        del(root);
    }
}

*/

