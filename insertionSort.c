#include<stdio.h>
#define SIZE 10 

int a[] = {10,9,8,7,6,5,4,3,2,1};


void display(){
    int i;
    printf("\n");
    for(i=0;i<SIZE;i++){
        printf("  %d",a[i]);
    }
}

void insertionSort(){

    int i,j,tmp; 
    for(i=1;i<SIZE;i++){
        tmp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j] > tmp){
                a[j+1]=a[j];
            }else{
                break;
            }
        } 
        a[j+1] = tmp; 
    }    
}

int main(){
    display();
    insertionSort();
    display();
}