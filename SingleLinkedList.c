#include<stdio.h>
#include<stdlib.h>

//node {data,next}


struct node{
    char name[20];
    int rollNum; 
    struct node *next;
}*head=NULL,*last=NULL;

void addNode(){
    if(head == NULL){ 
        head = malloc(sizeof(struct node)); 
        printf("\nEnter name and rollNUm");
        scanf("%s%d",&head->name,&head->rollNum);
        head->next = NULL;
        last = head; 
    }else{
        struct node *tmp; 
        tmp = malloc(sizeof(struct node));
        printf("\nEnter name and rollNUm");
        scanf("%s%d",&tmp->name,&tmp->rollNum);
        tmp->next=NULL;
        last->next = tmp;
        last = tmp; 
    } 

}

void display(){
        struct node *p;
        
        p = head; 

        while(p != NULL){
            printf(" %s ",p->name);
            p = p->next; 
        }
}

void addBeg(){
    struct node *p; 

    p = malloc(sizeof(struct node)); 
    printf("\nEnter name and rollNUm");
    scanf("%s%d",&p->name,&p->rollNum);
    p->next = head ; 
    head = p; 
}
int main(){

    int choice;

    while(1){ 
    printf("\n0 for exit\n1 For Add Student\n2 for List\n3 for Add Beg\nEnter choice");
    scanf("%d",&choice);


        switch (choice)
        {
        case 1:
            addNode();//last 
            break;
        case 2:
            display();
            break;    
        case 0:
            exit(0);
        case 3:
            addBeg();
            break;
        
        default:
            break;
        }
    }


    return 0; 
}