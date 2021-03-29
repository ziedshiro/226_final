#include<stdio.h>
int row(int *n[],int x)
{
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
            printf("%d",n[i][j]);
}
int column(n)
{

}
int bm(n)
{

}
int main()
{
    int x,y,z,i,j;
    scanf("%d %d %d",&x,&y,&z);
    int a[x][x],b[y][y],c[z][z];
    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
    scanf("%d",&a[i]);
    for(i=0;i<y;i++)
        for(j=0;j<y;j++)
    scanf("%d",&b[i]);
    for(i=0;i<z;i++)
        for(j=0;j<z;j++)
    scanf("%d",&c[i]);
    row(a,x);

}
