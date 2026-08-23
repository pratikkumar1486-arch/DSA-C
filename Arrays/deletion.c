#include<stdio.h>
#include<stdlib.h>
void display(int num[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}
    static int indexDeletion(int arr[],int size, int index){
         // for Deletion
     
         for(int i = index ;i < size-1 ;i++){
            arr[i]=arr[i+1];
        }
        
    }

int main(){
    int arr[100]={1,2,3,4,32};
    int size = 5 , index = 0;
    indexDeletion(arr,size,index);
    size -= 1;
    display(arr,size);
    
    return 0;
}