#include<stdio.h>
#include<string.h>
void main()
  {
    char str1[100],str2[100];
    printf("\n Enter the string:");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0)
      {
        printf("\n The string is palindrome");
      }
    else
      {
        printf("\n The string is not palindrome");
      }
  }
