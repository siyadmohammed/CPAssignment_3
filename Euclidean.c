#include<stdio.h>
struct euclidean
  {
    int dist1,dist2;
  }d;
void main()
  {
    int sum;
    printf("\n Enter the distance between first 2 points");
    scanf("%d",&d.dist1);
    printf("\n Enter the distance between the next 2 points");
    scanf("%d",&d.dist2);
    sum=d.dist1+d.dist2;
    printf("\n Total distance=%d",sum);
  }
  
