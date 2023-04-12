//bubble sort
#include<stdio.h>
int main()
{
    int i,a[10],n,j,temp;
    printf("enter the no. of element=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j]) //compare next and previous element
            {
                temp=a[i];  //swap element
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("\n sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
