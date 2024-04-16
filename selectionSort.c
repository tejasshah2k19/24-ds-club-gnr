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

void selectionSort(){

    int i,j,tmp,min; 

    for(i=0;i<SIZE;i++){
        min = i; 
        for(j=i+1;j<SIZE;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] =tmp ;

    }
}

int main(){
    display();
    selectionSort();
    display();
}