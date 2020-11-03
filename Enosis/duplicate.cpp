#include<bits/stdc++.h>
using namespace std;

void duplicate(int ar[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j] && ar[i]!=-1)
            {
                printf("%d ",ar[j]);
                ar[j]=-1;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+2];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    duplicate(ar,n);
}
