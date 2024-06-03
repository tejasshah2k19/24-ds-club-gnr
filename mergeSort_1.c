#include<stdio.h>
#define S  10 


void mergeSort(int a[],int l,int m,int r){//0 4 9 
        int s1=m-l+1;//5
        int s2=r-m;//5
        int t1[s1];
        int t2[s2];
        int i,j,k;

        for(i=l;i<=m;i++){
            t1[i] = a[i]; //5,10,15,20,25
        }

        for(i=m+1,j=0;i<=r;i++,j++){
            t2[j] = a[i]; //1,7,18,30,35
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
    k=0;

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

int main(){

    int a[]={ 5   ,10  ,15  ,20  ,25, 1   ,7   ,18  ,30  ,35};
   
    int l=0;
    int r = S-1;
    int m = (l+r)/2;

    mergeSort(a,l,m,r);

    
    return 0;
}