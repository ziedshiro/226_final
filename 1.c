#include<stdio.h>
int main()
{
    int n,m,k=0;
    scanf("%d %d",&n,&m);
    do
    {
    if(k>0)
       k/=10;
    else
    {
        n++;
        k=n;
    }

    }while(n%10!=m||k%10!=m);
    printf("%d",n);
}
