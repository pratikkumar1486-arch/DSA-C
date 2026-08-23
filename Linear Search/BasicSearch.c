#include<stdio.h>

static int search(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
 
    }
    return -1;
}

int main(){
    int arr[]= {1,2,36,46,56};
    int n = sizeof(arr)/sizeof(int);
    int target ;
    printf("Enter element you want to search : ");
    scanf("%d",&target);
    int result = search(arr,n,target);
  if(result !=-1){
    printf("Element found at index : %d",result);
  }
   else{
    printf("Element not found.");
  }
    return 0;
}