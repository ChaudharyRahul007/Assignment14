/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter a 10 number:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    sum = sum+a[i];
    avg= sum/10.0;
    printf("average of 10 number = %f",avg);
    return 0;
}