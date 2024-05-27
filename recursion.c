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