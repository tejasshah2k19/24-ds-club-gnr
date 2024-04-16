#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int f = -1;
int r = -1;

void insert(int data)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }
    else if (r == SIZE - 1)
    {
        r = 0;
        queue[r] = data;
    }
    else
    {
        r++; // 0
        queue[r] = data;
        if (f == -1) // first insertion
            f = 0;
    }
}

void display()
{
    int i;

    if (r >= f)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", queue[i]);
        }
    }
    else
    {

        for (i = f; i < SIZE; i++)
        {
            printf(" %d", queue[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}

void deleteQ()
{
    if(f==-1){
        printf("\nQ is empty");
    }else if(f==r){
        printf("\n%d deleted",queue[f]);
        f=-1;r=-1; 
    }else if(f == SIZE-1){
        printf("\n%d deleted",queue[f]);
        f=0;     
    }else{
        printf("\n%d deleted",queue[f]);
        f++;
    }
}

int main()
{

    insert(10);

    return 0;
}