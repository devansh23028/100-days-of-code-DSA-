/*Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/






#include <stdio.h>
void insert(int arr[],int n,int k,int num){
    for(int i=n;i>=k;i--){
      
        arr[i+1]=arr[i];
      
      }
        arr[k]=num;
        for(int i=1;i<=n+1;i++){
        printf("%d \t",arr[i]);
       
        }
    }   


int main()
{
    int n,i,k,num;
    printf("Enter number of elements array");
    scanf("%d",&n);
    printf("enter index where you want to insert element");
    scanf("%d",&k);
    printf("enter element which is to be insert");
    scanf("%d",&num);
    int arr[n+1];
      printf("enter elements in array");
    for(i=1;i<=n;i++){
      
        scanf("%d",&arr[i]);
        }
    insert(arr,n,k,num);
     return 0;    
}
