#define ll long long
ll a[100010];
int main()
{
    ll i, j, n, m, q, t;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld %lld", &n, &q);

        for(i=1; i<=n; i++)
            scanf("%lld", &a[i]);
        ll res=n;

        for(i=2; i<=n; i++)
        {
            if(a[i]==a[i-1])
                res--;
        }
        a[n+1]=-1;
        a[0]=-1;
        while(q--)
        {
            ll pos, x;

            scanf("%lld %lld", &pos, &x);

            if(a[pos]==a[pos-1] && x!=a[pos])
                res++;
            if(a[pos]==a[pos+1] && x!=a[pos])
                res++;

            if(a[pos]!=a[pos-1] && a[pos-1]==x)
                res--;
            if(a[pos]!=a[pos+1] && a[pos+1]==x)
                res--;

            a[pos]=x;

            printf("%lld\n", res);
        }
    }


    return 0;
}
