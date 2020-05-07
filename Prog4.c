\\ Program for Merge sort
#include<stdio.h> 
void Mergesorting(int arr[],int i,int j); 
void Merge(int arr[],int i1,int j1,int i2,int j2); 
  int main() 
{ 
 int arr[20],n,i; 
 printf("Enter no of elements:"); 
 scanf("%d",&n); 
 printf("Enter array elements:"); 
 for(i=0;i<n;i++) 
  scanf("%d",&arr[i]); 
 Mergesorting(arr,0,n-1); 
  printf("Sorted array is :"); 
 for(i=0;i<n;i++) 
  printf("%d ",arr[i]); 
 return 0; 
} 
void Mergesorting(int arr[],int i,int j) 
{ 
 int mid;  
 if(i<j) 
 { 
  mid=(i+j)/2; 
  Mergesorting(arr,i,mid); 
  Mergesorting(arr,mid+1,j); 
  Merge(arr,i,mid,mid+1,j); 
 } 
} 
void Merge(int arr[],int i1,int j1,int i2,int j2) 
{ 
 int t[50];  
 int i,j,k; 
 i=i1;   
 j=i2;  
 k=0;  
 while(i<=j1 && j<=j2) 
 { 
  if(arr[i]<arr[j]) 
   t[k++]=arr[i++]; 
  else 
   t[k++]=arr[j++]; 
 } 
  
 while(i<=j1)  
  t[k++]=arr[i++]; 

 while(j<=j2)  
  t[k++]=arr[j++]; 
   
 for(i=i1,j=0;i<=j2;i++,j++) 
  arr[i]=t[j]; 
} 