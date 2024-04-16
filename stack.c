#include<stdio.h>
#include<stdlib.h>
#define SIZE 5 

int stack[SIZE];
int top = -1;//empty 

//timecomplexity ->worst  -> O(1) 
void push(int num){ //O(1) 
    if(top == SIZE - 1){
        printf("\nStack OVERFLOW");
    }else{  
        top++;
        stack[top] = num;   
    }
}

void display(){
    int i;
    for(i=top; i>=0;i--)		
        printf("\n%d",stack[i]);

}

void pop(){
    if(top == -1){
        printf("\nStack EMpty");
    }else{
        printf("\n%d pop",stack[top]);
        top--; 
    }
}

int main(){
    int choice;
    int num; 

    while(-1){ // 0 : false : any number: true  

        printf("\n0 For Exit\n1 For PUSH\n2 For POP\n3 For DIsplay\nEnter choice");
        scanf("%d",&choice); 

        switch (choice)
        {
            case 1:
                printf("\nEnter number");
                scanf("%d",&num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(1);
            default:
                printf("\nInvalid Choice PTA");
                break;
        }
    }
}












