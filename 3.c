#include<stdio.h>
int mgs(int n)
{
    int i,j,N[n][n],ans,dd=0,df=0,db=0,r[n],cl[n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&N[i][j]);
    for(i=0;i<n;i++)
    {
        r[i]=0;
        cl[i]=0;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            r[i]+=N[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cl[i]+=N[j][i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
                df+=N[i][j];
    for(i=0;i<n;i++)
        for(j=n-1;j>=0;j--)
            if(i==j)
                db+=N[i][j];
    if(df==db)
        dd=1;
    else
        dd=0;
    for(i=0;i<n;i++)
    {
        if(r[i]==cl[i])
            ans=1;
        else
        {
            ans=0;break;
        }
    }
    return ans;
}
int chk(int n)
{
    if(n==1)
        printf("no");
    else
        printf("yes");
}
int main()
{
    int x,y,z,a;
    scanf("%d %d %d",&x,&y,&z);
    a=mgs(x);
    printf("%d",a);



}
