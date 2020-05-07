\\ Program to implement Insertion Sort Algorithm
#include<stdio.h> 
int main()
{ 
   int t, cnt, num[20], i, j; 
 
   printf("Enter Total Number of elements "); 
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
 
   printf("The list of Sorted Elements: "); 
   for(i=0;i<cnt;i++) 
      printf(" %d",num[i]); 
   return 0; 
}