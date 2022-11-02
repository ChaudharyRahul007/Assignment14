/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("Enter length of Array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Normal Order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\nEverse Order :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}