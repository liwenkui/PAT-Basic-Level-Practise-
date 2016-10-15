#include<stdio.h>
int main()
{
    int i,n,tmp,index[200000]={0},e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        index[tmp]++;
    }
    for(i=199999;i>0;i--)
    {
        e+=index[i];
        if(e>=i-1)
        {
            e=i-1;
            i=0;
        }
    }
    printf("%d",e);
    return 0;
}