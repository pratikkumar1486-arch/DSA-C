#include<stdio.h>
#include<stdlib.h>
void display(int num[],int n,int capacity,int index){
    if(index<capacity){
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");}
    else 
    printf("Invalid insertion");
}
    static int indexInsertion(int arr[],int size, int element,int capacity,int index){
         // for Insertion
        if(size<capacity){
           for(int i = size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        }
        else return -1;
    }

int main(){
    int arr[100]={1,2,3,4,32};
    int size = 5, element = 45,index =4;
    indexInsertion(arr,size,element,100,index);
    size += 1;
    display(arr,size,100,index);
    
    return 0;
}