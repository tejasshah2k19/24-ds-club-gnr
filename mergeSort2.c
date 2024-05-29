#include<stdio.h>
#define S 10


void mergeSort(int a[],int l,int m,int r){
    int s1 = m-l+1;
    int s2 = r-m;

    int t1[s1];
    int t2[s2];

    


}

void divide(int a[],int l,int r){// 0 4 0 2  0 1  0 0 

    int mid = (l+r)/2;//mid//4 
    if(l<r){ 
        divide(a,l,mid);  //0,4 
        divide(a,mid+1,r);
        mergeSort(a,l,mid,r);
    }
}

int main(){

    int a[] ={20   ,35   ,15   ,10  ,7  ,18  ,1  ,25  ,30  ,5};

    divide(a,0,S-1);

}