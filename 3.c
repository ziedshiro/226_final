#include<stdio.h>
int mgs(int n)
{
    int i,j,N[n][n],ans=0,dd=0,df=0,db=0,r[n],cl[n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&N[i][j]);
    for(i=0;i<x;i++)
    {
        r[i]=0;
        cl[i]=0;
    }
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
            r[i]+=a[i][j];
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
            cl[i]+=a[j][i];
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
            if(i==j)
                df+=a[i][j];
    for(i=0;i<x;i++)
        for(j=x-1;j>=0;j--)
            if(i==j)
                db+=a[i][j];
    if(df==db)
        dd=1;
    else
        dd=0;
    for(i=0;i<x;i++)
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
int main()
{
    int x,y,z,i,j,ans=0,dd=0;
    scanf("%d %d %d",&x,&y,&z);
    mgs(x);
    if()
    //mgs(y);
    //mgs(z);

}
