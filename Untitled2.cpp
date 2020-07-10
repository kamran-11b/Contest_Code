#include <bits/stdc++.h>

using namespace std;

#define   blank     0
#define   inn       1
#define   outt      2
#define   it        3

int in[100005],out[100005];

int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        printf("Case %d:\n",i);
        int n;
        scanf("%d",&n);

        vector<int>adj[n+5];
        int visit[n+5];

        memset(visit,0,sizeof(visit));
        memset(in,0,sizeof(in));
        memset(out,0,sizeof(out));

        for(j=0;j<n-1;j++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        q.push(1);
        visit[1]=1;
        out[1]=1;
        while(!q.empty())
        {
            int node=q.front();
            //printf("Node:  %d\n",node);
            q.pop();
            for(j=0;j<adj[node].size();j++)
            {
                int node_2=adj[node][j];
                //printf("Adjacent:  %d && visit= %d\n",node_2,visit[node_2]);

                if(visit[node_2]==0)
                {
                    //printf("Adjacent:  %d\n",node_2);
                    if(out[node]==1)
                    {
                        printf("%d %d\n",node,node_2);
                        in[node_2]=1;
                        visit[node_2]=1;
                        q.push(node_2);
                    }
                    else if(in[node]==1)
                    {
                        printf("%d %d\n",node_2,node);
                        out[node_2]=1;
                        visit[node_2]=1;
                        q.push(node_2);
                    }
                }
            }
        }
    }
}
