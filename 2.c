#include<stdio.h>
int main()
{
    int i,n,j,x,y=0,mx,k=0;
    scanf("%d",&n);
    int N[n],max[n],ct[n];
    for(i=0;i<n;i++)
        ct[i]=0;
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
    for(i=0;i<n;i++)
        {
            if(max[i]==max[i+1])
                ct[y]++;
            if(max[i]!=max[i+1])
                y=i+1;
        }
        mx=ct[0];
    for(i=0;i<n;i++)
        if(mx<ct[i])
        {
            mx=ct[i];
        }
    for(i=0;i<n;i++)
    {
        if(mx==ct[i])
            printf("%d ",max[i]);
    }


}
