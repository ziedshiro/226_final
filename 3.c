#include<stdio.h>
mgs(int n)
{
    int i,j,N[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&N[i][j]);
}
int main()
{
    int x,y,z,i,j,ans=0,dd=0;
    scanf("%d %d %d",&x,&y,&z);
    mgs(x);
    //mgs(y);
    //mgs(z);

}
