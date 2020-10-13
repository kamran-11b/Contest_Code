#include <stdio.h>
#include <stdlib.h>

int front,rear;
int q[200];
int goalMatrix [5][5];
int popMatrix [5][5];

void push(int value)
{
    q[rear++]=value;
}
int size(int front, int rear)
{
    return (rear - front);
}
bool isEmpty()
{
    if (rear == front)
        return 1;
    return 0;
}
void pop()
{
    int f=front,i=0;
    while(f<front+9)
    {
        for(int k=0; k<3; k++)
        {
            popMatrix[i][k]=q[f++];
        }
        i++;
    }
    front+=9;
}

bool checkGoal()
{
    bool x=true;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(goalMatrix[i][j]!=popMatrix[i][j])
                x=false;
        }
    }
    return x;
}

int main()
{
    //define goalMatrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&goalMatrix[i][j]);
        }
    }
    //push four random matrix
    for(int k=0; k<4; k++)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                int x=rand()%10;
                push(x);
            }
        }
    }

    int count=0;
    while(!isEmpty())
    {
        pop();
        count++;
        if(checkGoal()==true)
        {
            printf("Found Goal.\nIndex of GoalMatrix = %d\n",count);
            return 0;
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                popMatrix[i][j]=0;
            }
        }
    }
    printf("Found Not Goal.\n");
    return 0;
}
