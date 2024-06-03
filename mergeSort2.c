#include<stdio.h>
#define S 10




void mergeSort(int a[],int l,int m,int r){//0 4 9 
        int s1=m-l+1;//5
        int s2=r-m;//5
        int t1[s1];
        int t2[s2];
        int i,j,k;

        for(i=0;i<s1;i++){
            t1[i] = a[l+i]; //5,10,15,20,25
        }

        for(j=0;j<s2;j++){
            t2[j] = a[m+j+1]; //1,7,18,30,35
        }
        

        printf("\nT1 :  ");
        for(i=0;i<s1;i++){
            printf(" %d",t1[i]);
        }

        
        printf("\nT2 :  ");
        for(i=0;i<s2;i++){
            printf(" %d",t2[i]);
        }

    //t1 -
    //t2 -
    //a sort merge 

    //
    i=0;
    j=0;
    k=l;

    while(i<s1 && j<s2)
    {
        if(t1[i] < t2[j]){
            a[k] = t1[i];
            i++;
            k++;
        } else{
            a[k] = t2[j];
            j++;
            k++;
        }
    }    

    while(i<s1){
        a[k++] = t1[i++];
    }

    while(j<s2){
        a[k++] = t2[j++];
    }

}



void divide(int a[],int l,int r){// 0 4 0 2  0 1  0 0 

  
    if(l<r){ 
      int mid = (l+r)/2;//mid//4 
        divide(a,l,mid);  //0,4 
        divide(a,mid+1,r);
        mergeSort(a,l,mid,r);
    }
}

int main(){

    int i;
    int a[] ={20   ,35   ,15   ,10  ,7  ,18  ,1  ,25  ,30  ,5};

    printf("\nArray Before Sorting : ");
    for(i=0;i<S;i++){
        printf(" %d",a[i]);
    }
    divide(a,0,S-1);
    printf("\nArray After Sorting : ");
    for(i=0;i<S;i++){
        printf(" %d",a[i]);
    }
}