/*Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter a 10 numbers :");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array Sort....");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}