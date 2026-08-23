#include<stdio.h>
#include<stdlib.h>
struct myArrays{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArrays *a, int tsize , int usize){
    a->total_size= tsize;
    a->used_size = usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
};
 void setVal(struct myArrays *a){
    printf("Enter numbers : ");
    for(int i = 0;i<a->used_size;i++){
        int n;
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
 };
    void showVal(struct myArrays *a){
      
    for(int i = 0;i<a->used_size;i++){      
        printf("\n%d\n", (a->ptr)[i]);
       
    }
    };



int main(){
    struct myArrays marks;
    createArray(&marks,10,2);
    setVal(&marks);
    printf("Show value : ");
    showVal(&marks);

    
    
    return 0;
}