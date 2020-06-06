#include<stdio.h>
void main()
  {
    int a[20],n,i,sum=0 ;
    float avg;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the elements into the array:\t");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    printf("\n Elements in the array are: \t");
    for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
      }
    for(i=0;i<n;i++)
      {
        sum=sum+a[i];
      }
    avg=sum/n;
    printf("\n The sum of elements is %d and average is %f",sum,avg);
  }
