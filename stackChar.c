#include<stdio.h>
#define SIZE 50 
#include <string.h> 

char stack[SIZE];
int top = -1 ; //empty 


void push(char data){
    if(top == SIZE - 1){
        printf("\nStack OVERFLOW");
    }else{ 
        top++; 
        stack[top] = data; 
    }
}

char pop(){
    printf("\n%c pop",stack[top]);
    top--;
}

void display(){
    int i;
    for(i=top;i>=0 ;i--){
        printf("%c",stack[i]);
    }
}
