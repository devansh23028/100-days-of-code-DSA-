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
