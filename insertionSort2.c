#include<stdio.h>
#define SIZE 8 

int main(){

    int a[]={14,12,16,17,10,18,90,24};

    int i,j,tmp; 

    printf("\nArray Before Sorting\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }

    
    for(i=1;i<SIZE;i++){
        tmp = a[i];// 12 

        for(j=i-1 ;j>=0;j--){
            if(a[j] > tmp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = tmp; 
    } 


    printf("\nArray After Sorting\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }


    return 0;
}