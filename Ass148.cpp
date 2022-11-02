/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,min=0,smin;
    printf("Enter a 10 numbers :");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
        {
            smin=min;
            min=a[i];
        }
        else
        {
            if(a[i]<smin && a[i]>min)
            {
                smin=a[i];
            }
        }
    }
    printf("Second smallest = %d",smin);
    return 0;
}