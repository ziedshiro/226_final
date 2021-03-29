#include<stdio.h>
int main()
{
    int x,y,z,i,j,ans=0;
    scanf("%d %d %d",&x,&y,&z);
    int a[x][x],b[y][y],c[z][z];
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
    scanf("%d",&a[i]);
    /*for(i=0;i<y;i++)
        for(j=0;j<y;j++)
    scanf("%d",&b[i]);
    for(i=0;i<z;i++)
        for(j=0;j<z;j++)
    scanf("%d",&c[i]);*/
    int r[x],cl[x],d[x];
    for(i=0;i<3;i++)
    {
        r[i]=0;
        cl[i]=0;
        d[i]=0;
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
            d[i]+=a[i][j];
    for(i=0;i<x;i++)
    {
        if(r[i]==cl[i]&&r[i]==d[i]&&cl[i]==d[i])
            ans=1;
        else
        {
            ans=0;break;
        }
    }
    if(ans==1)
        printf("no");
    else
        printf("yes");
}
