#include<stdio.h>
#define SIZE 5

int queue[SIZE]; 
int f=-1;
int r=-1; 

 
void insert(int data)
{
    if (r == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        r++; // 0
        queue[r] = data;
        if(f==-1) //first insertion 
            f=0; 
    }
}
void display(){
    int i;
    for(i=f;i<=r;i++){
        printf(" %d",queue[i]);
    }
}

void deleteQ(){

}


int main(){

    insert(10); 

    return 0; 
}