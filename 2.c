#include<stdio.h>
int main()
{
    int i,n,j,x,y;
    scanf("%d",&n);
    int N[n],max[n];
    for(i=0;i<n;i++)
        scanf("%d",&N[i]);
    for(i=0;i<n;i++)
        max[i]=N[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
    {
        if(max[j]>max[j+1])
        {
            x=max[j];
            max[j]=max[j+1];
            max[j+1]=x;
        }
    }
    }
    for(i=0;i<n-1;i++)
        printf("%d",&max[i]);

}
