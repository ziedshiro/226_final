#include<stdio.h>
int num(int n)
{

}
int main()
{
    int n,m,ans=0;
    scanf("%d %d",&n,&m);
    do
    {
        if(num(n)==0)
            n++;
        else
            ans=1;
    }while(ans!=1);
}
