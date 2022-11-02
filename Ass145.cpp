/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],i,small=0;
    printf("Enter a number :");
    for(i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    small=arr[0];
    for(i=1;i<=9;i++)
    if(arr[i]<small)
    {
        small=arr[i];
    }
    printf("\nSmallest number = %d",small);
    return 0;
}