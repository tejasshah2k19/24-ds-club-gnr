#include<stdio.h> 



void add(){
    printf("\nAdd");
}

void sub(int n){//5
    if(n!=0){ //base case 
       printf("\n%d",n);
       sub(--n);//recursion 
       printf("\n%d",n);

    }
    //

}

void fun2(){
    
}
void fun1(){

    fun2();
    printf("hi");

}
int main(){


    sub(5);

    fun1();

    return 0;
}

//print(5);
//royal 5 times 

//print(3); 
//royal 3 times 


//mulTable -> 5 -> 

//  5*1 =  5 
//  5*2 =  10
//  5*3 =  15 
//  5*10 = 50 
//--------------------------------------------------


