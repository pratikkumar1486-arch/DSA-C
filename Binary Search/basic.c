#include<stdio.h>
static int Search(int arr[],int size ,int target){
    int low =0;
    int high = size -1;
    while(low<=high){
     int mid = (low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        high = mid-1;
    }
    else low = mid+1;
}
    return -1;
}
int main(){
    int arr[] ={1,3,5,67,87,94};  // Sorted Array for Binary  Search -->
    int size = sizeof(arr)/sizeof(int);
    int key;
    printf("Enter element you want to search : ");
    scanf("%d",&key);
    int result=Search(arr,size,key);
    printf("Element found at index : %d .",result);

    
    return 0;
}