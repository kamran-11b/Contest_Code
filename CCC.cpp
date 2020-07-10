#include <bits/stdc++.h>
using namespace std;

#define ios             ios_base::sync_with_stdio(0);
#define YES             cout<<"YES"<<endl
#define NO              cout<<"NO"<<endl
#define sin(s)	        getline(cin,s)
#define ll              long long
#define ull             unsigned long long
#define dd              double
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))


#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define EPS              10E-10
#define MOD              1000000007
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define PRINT_CASE       printf("Case %d: ",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))


typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll,ll> pll;
typedef set<int>si;
typedef map<int,int>mii;
typedef map<long,long>mll;
typedef map<string,int>msi;
typedef vector<pair<string,int> >vp;

#define PI ( acos(-1.0) )
#define mem(a, b)      memset(a, b, sizeof(a))
const int size1 = 4e5 + 500;
const long long INF = 1e18;
const long long mod = 1e9 + 7;
const long double eps = 1e-7;
const long double pi = 3.1415926535;


// map<string, int>::iterator it;
//it = table.begin(); it != table.end(); it++
/* C++ inbuilt function for finding GCD and LCM */
#define gcd              __gcd(m, n)
#define lcm              boost::math::lcm(m,n)
#define lcm1             lcm(m,n)//c++17

bool is_prime(int x)
{
    if (x < 2)return false;
    for (int i = 2; i * i <= x; ++i)if (x % i == 0)return false;
    return true;
}

ll power(ll x,ll y,ll p)
{
    ll res=1;
    x%=p;
    while(y>0)
    {
        if(y&1)res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}

int largeRandom(int x,int y)
{
    return rand()%x * rand()%y;
}


bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.second < b.second);
}
//sort(v.begin(), v.end(), sortbysec);

/**********************************************/
int bs(int ar[],int l,int r,int x)
{

    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if(ar[mid]==x)
        {
            return mid;
        }
        if(ar[mid]>x)
        {
            return bs(ar,l,mid-1,x);
        }
        else
        {
            return bs(ar,mid+1,r,x);
        }
    }
    return -1;
}


string toBinary(int n)
{
    string r;
    while(n!=0)
    {
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}

/*Binary to Decimal*/
int bi(int a)
{
    int n=0,c=0;
    while(a>0)
    {
        int p=a%10;
        n=n+(p*(pow(2,c)));
        a/=10;
        c++;
    }
    return n;
}

/*******Decimal to binary string number********/

string s=bitset<bit_number>(decimal_number).to_string();

bit_number-> 2,4,8,16.32

string s=bitset<32>(15).to_string();

/*******Is_Vowel********/

void is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||  x == 'o' || x == 'u' || x == 'A' ||
            x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return 1;
    else
        return 0;

}

/*****************************************/

ll fast_power(ll base,ll power,ll MOD)
{
    ll result = 1;
    while(power > 0)
    {
        if(power % 2 == 1)
        {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2;
    }
    return result;
}
ll modulo_multiplicative_inverse(ll A, ll M)
{
    return fast_power(A, M-2, M);
}

/**************String to int ******************/

string int_to_str(int n)
{
    stringstream ss;
    ss<<n;
    //ss<<fixed<<setprecision(5)<<n;
    return ss.str();
}

int str_to_int(string s)
{
    stringstream ss(s);
    int n;
    ss>>n;
    return n;
}


/****************R**P****************/
int pa(int n)
{
    int a,b=0;
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    return b;
}
/****************Digit Sum****************/
int Dsum(int n)
{
    int a,b=0;
    while(n!=0)
    {
        a=n%10;
        b+=a;
        n=n/10;
    }
    return b;
}
/************BIG-MOD***************/
ll bigmod(ll a,ll b,ll mod)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll hh=bigmod(a,b/2,mod);
        return (hh*hh)%mod;
    }
    else
    {
        return (a*bigmod(a,b-1,mod))%mod;
    }
}
/**************GCD***************/
int GCD(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return GCD(b,a%b);
}

/*ll n1, n2;
  cin >> n1 >> n2;
  ll hcf = n1;
  ll temp = n2;
  while(hcf != temp)
  {
      if(hcf > temp)
          hcf -= temp;
      else
          temp -= hcf;
  }

  ll lcm = (n1 * n2) / hcf;
  cout<<lcm<<endl;
  */
/**************PerfectSquare*****************/

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;

    fVar=sqrt((double)number);
    iVar=fVar;

    if(iVar==fVar)
        return 1;
    else
        return 0;
}



bool is_perfect_cube(ll n)
{
    ll root(round(cbrt(n)));
    return n == root * root * root;
}
bool is_perfect_square(ll n)
{
    if (n < 0)
        return false;
    ll root(round(sqrt(n)));
    return n == root * root;
}
/*************Logic Perfect Square long Rang***********/
/*
    ll n,m;
    cin>>m>>n;
    ll k=0;
    for(ll i=m; i<=n; i++)
    {
        if(isPerfectSquare(i))
        {
            cout<<i<<endl;
            ll a=i-k;
            i=i+a;
            k=i;
        }
    }
    return 0;
}*/

/***************factorial***************/
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
/***************nCr or nPr***************/
long npr(int n,int r)
{
    return fact(n)/fact(n-r);
}

ll NcR(ll n,ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}

int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
/***************Fib***************/
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

ll Bigmod(ll A,ll B,ll C)
{
    if(B==0LL)return 1LL;
    ll x=Bigmod(A,B/2LL,C);
    x=(x*x)%C;
    if(B%2==1)
        x=(x*A)%C;
    return x;
}

ll power(ll n, ll k)
{
    ll ans = 1;
    for(ll i=0; i<k; i++)
    {
        ans *= n;
    }
    return ans;
}


int mxp=0;
int prime_factor(int n)
{
    int i,s=0;
    for(i=2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            n/=i;
            s++;
            //print(x);
            //mxp=max(x,mxp);
        }
        //b[x]+=y;
    }
    // print(n);
    if(n>1)
        s++;
    return s;
}

bool leaf;
void dfs(int v)
{
    w[v]=false;
    los[v]=false;
    leaf=true;
    for(int i=0; i<26; i++)
    {
        if(trie[v][i]!=0)
        {
            leaf=false;
            int u=trie[v][i];
            dfs(trie[v][i]);
            w[v]|=!w[u];
            los[v]|=!los[u];
        }
    }
    if(leaf)
        los[v]=true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    int a;
    cin>>a;
    cout<<a;
}
