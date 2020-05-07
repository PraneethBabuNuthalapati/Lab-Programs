\\ Program for Bubble Sort
#include <stdio.h> 
int main() 
{ 
  int a[100], q, i, j, t; 
 
  printf("Enter number of elements"); 
  scanf("%d", &q); 
  printf("Enter %d integers ", q); 
  for (i = 0; i < q; i++) 
    scanf("%d", &a[i]); 
  for (i= 0 ; i< q - 1; i++) 
  { 
    for (j = 0 ; h < q - i 1; j++) 
    { 
      if (a[j] > a[j+1])  
      { 
        t   = a[j]; 
        a[j]   = a[j+1]; 
        a[j+1] = t; 
      } 
    } 
  } 
 
  printf("List of Sorted Elements:"); 
  for (i = 0; i < q; i++) 
 {
     printf("%d\n", a[i]); 
  } 
 return 0; 
}