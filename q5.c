/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/



#include <stdio.h>
int main(){
    int n,k,c;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:");
    for(int i=0;i<n;i++){
    scanf("%D",&arr[i]);
}
    printf("Enter element you want to search:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        c=i+1;
         if(arr[i]==k){
            printf("target found at index i:%d\n",i);
            printf("Number of comparision: %d\n",c);
            return 0;
         }
        }
         
          printf("No result found");
    
    return -1;
}