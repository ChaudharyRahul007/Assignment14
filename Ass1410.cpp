/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
#include<stdio.h>
int main()
{
    int a1[20],a2[20],i,n;
    printf("Enter A length of array :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("first Array \n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a1[i]);
    }
     
    printf("\nCoping Array :");
    for(i=0;i<=n;i++)
    {
        a2[i]=a1[i];
    }
    printf("\nsecond Array :\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a2[i]);
    }
    return 0;
}