\\ Program for Heap Sorting
#include <stdio.h> 
void main() 
{ 
    int heap[10], a, i, j, b, r, t; 
    printf("Enter number of elements :"); 
    scanf("%d", &a); 
    printf("Enter the numbers : "); 
    for (i = 0; i < a; i++) 
       scanf("%d", &heap[i]); 
    for (i = 1; i < a; i++) 
    { 
        b = i; 
        do 
        { 
            r = (b - 1) / 2;              
            if (heap[r] < heap[b])    
            { 
                t = heap[r]; 
                heap[r] = heap[b]; 
                heap[b] = t; 
            } 
            b = r; 
        } while (b != 0); 
    } 
  
    printf("Heap array : "); 
    for (i = 0; i < a; i++) 
        printf("%d\t ", heap[i]); 
    for (j = a - 1; j >= 0; j--) 
    { 
        t = heap[0]; 
        heap[0] = heap[j];      
        heap[j] = t; 
        r = 0; 
        do  
        { 
            b = 2 * r + 1;
            if ((heap[b] < heap[b + 1]) && b < j-1) 
                b++; 
            if (heap[root]<heap[b] && b<j)    
            { 
                t = heap[r]; 
                heap[r] = heap[b]; 
                heap[b] = t; 
            } 
            r = b; 
        } while (b < j); 
    ;} 
    printf(" The sorted array is : "); 
    for (i = 0; i < a; i++) 
       printf("\t %d", heap[i]); 
} 