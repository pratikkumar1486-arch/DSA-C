#include<stdio.h>

void display(int num[],int n){
    // for traversal
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={1,2,3,4};
    display(arr,4);
    return 0;
}