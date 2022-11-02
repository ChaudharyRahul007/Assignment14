/*Write a program to find second largest in an array.Take array values from the user*/
#include<stdio.h>
int main()
{
    int a[10],i,max=0,slargest;
    printf("Enter a 10 numberd :");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
        if(max<a[i])
        {
        slargest=max;
         max=a[i];
        }
        else
        {
            if(a[i]>slargest && a[i]<max)
            {
                slargest=a[i]; 
            }
        }
        
        printf(" second largest = %d",slargest);
        return 0;

}