#include<stdio.h>
#define S1 5
#define S2 5
#define S3  S1+S2 


int main(){

    int a[]={ 5   ,10  ,15  ,20  ,25 };
    int b[]={ 1   ,7   ,18  ,30  ,35 };
    int c[S3]; 
    int i=0,j=0,k=0;


    while(i<S1 && j<S2){ 
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }else{
            c[k] = b[j];
            j++;
            k++;
        }
    }


    while(i < S1){
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < S2){
        c[k] = b[j];
        j++;
        k++;
    }


    for(i=0;i<S3;i++){
        printf(" %d",c[i]);
    }
    return 0;
}