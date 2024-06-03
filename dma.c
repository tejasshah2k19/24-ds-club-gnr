#include<stdio.h>
#include<stdlib.h>


struct std {
    int age;
    float perc;
};

int main(){
  //  int p;//4 byte  ?  
    // int *a;//4 byte 

    // a = malloc(4); // a = malloc(sizeof(int)); 
    // printf("\nEnter value ");
    // scanf("%d",a);
    // printf("\n%d ",*a);
    // free(a);
    // //
    //
    //
    //
    //
    // int *arr;
    // int i; 
    // arr = calloc(5,sizeof(int));//5 elements -> 4 byte each 
  
    // for(i=0;i<5;i++){
    //     //scan 
    // }

    // for(i=0;i<5;i++){
    //     //print  
    // }
    
    // free(arr); 

    struct std s,y;
    struct std *t; 
    printf("\nEnter age and perc");
    scanf("%d%f",&s.age,&s.perc);
    printf("\n%d %f",s.age,s.perc);

    t = malloc(sizeof(struct std));

    printf("\nEnter age and perc");
    scanf("%d%f",&t->age,&t->perc);
    printf("\n%d %f",t->age,t->perc);

    free(t); 
    
    return 0; 
}//

//take two num from user and find max from it 
//DMA 


//take n numbers from user and find out the max number from it.
//DMA 



//array -> n number of item but same type of data 
//structure -> mixture of data 
//              int , char ,float 


