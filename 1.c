#include<stdio.h>
int num(int n,int m)
{
    int i,k,ans=0;
    k=n;
    do
    {
        if(k%10==m)
        {
            ans=1;break;
        }
       k/=10;
    }while(k>0);
    return ans;
}
int main()
{
    int n,m,ans=0;
    scanf("%d %d",&n,&m);
    do
    {
        if(num(n,m)==0)
            n++;
        else
            ans=1;

    }while(ans!=1);
    printf("%d",n);
}
