/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/





#include <stdio.h>
int main(){
    int n,start,end,temp;
    printf("Enter number of elements in array:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\t");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start=0;
    end=n-1;
    while(start<end){
      temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
    }
    printf("Reversed array is:\t");
    for(int i=0;i<n;i++){
       printf("%d \t",arr[i]);
    }
    return 0;
}