#include<stdio.h>

void multi_three()
{
    for(int i=200; i>0; i--)
    {
        if(i%3==0)
            printf("%d ",i);
    }
}

void print_one_loop()
{
    int x=9;
    for(int i=1; i<20; i++)
    {
        if(i<=10)
            printf("%d ",i);
        else
            printf("%d ",x--);
    }
    printf("\n");
}

int main()
{
    //multi_three();
    print_one_loop();
}
