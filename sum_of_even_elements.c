#include<stdio.h>
int main()
{
    int a[100],i,sum=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of Even values is: %d ",sum);
    return 0;
}
