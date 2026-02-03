/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/


#include <stdio.h>
void delete(int arr[],int n,int k,int num){
  
  for(int i=k;i<n;i++){
     
        arr[i]=arr[i+1];
      
  }
    for(int i=1;i<n;i++){
        printf("%d \t",arr[i]);
       
        
    }      
} 


int main()
{
    int n,i,k,num;
    printf("Enter number of elements array");
    scanf("%d",&n);
    int arr[n];
      printf("enter elements in array");
    for(i=1;i<=n;i++){
      
        scanf("%d",&arr[i]);
        }
        
    printf("enter index where you want to delete element");
    scanf("%d",&k);

 if (k >= 1 && k <= n) {
        delete(arr, n, k,num);
    } else {
        printf("Invalid index!\n");
    }



     return 0;    
}
