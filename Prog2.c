\\ Program for Selection sort.
#include<stdio.h> 
int main()
{ 
   int t, cnt, num[10], i, j; 
   printf("Enter the number of elements "); 
   scanf("%d",&cnt); 
   printf("Enter %d elements: ", cnt); 
    for(i=0;i<cnt;i++) 
    {
      scanf("%d",&num[i]); 
     } 
   for(i=1;i<cnt;i++)
  { 
      t=num[i]; 
      j=i-1; 
      while((t<num[j])&&(j>=0))
     { 
         num[j+1]=num[j]; 
         j=j-1; 
      } 
      num[j+1]=t; 
   } 
   printf("List of Sorted elements: "); 
   for(i=0;i<cnt;i++) 
      printf(" %d",num[i]); 
   return 0; 
}