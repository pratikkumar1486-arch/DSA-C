#include<stdio.h>
#include<stdlib.h>
void display(int num[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}
    static indexInsertion(int arr[],int size, int element,int capacity,int index){
         // for Insertion
        if(size>=capacity){
            return -1;
        }
         for(int i = size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }

int main(){
    int arr[100]={1,2,3,4,32};
    int size = 5, element = 45;
    indexInsertion(arr,size,element,100,3);
    size += 1;
    display(arr,size);
    
    return 0;
}