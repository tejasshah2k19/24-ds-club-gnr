#include <stdio.h>
#include <stdlib.h>

// node {data,next}

struct node
{
    char name[20];
    int rollNum;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode()
{
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        printf("\nEnter name and rollNUm");
        scanf("%s%d", &head->name, &head->rollNum);
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp;
        tmp = malloc(sizeof(struct node));
        printf("\nEnter name and rollNUm");
        scanf("%s%d", &tmp->name, &tmp->rollNum);
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct node *p;

    p = head;

    while (p != NULL)
    {
        printf(" %s ", p->name);
        p = p->next;
    }
}

void addBeg()
{
    struct node *p;

    p = malloc(sizeof(struct node));
    printf("\nEnter name and rollNUm");
    scanf("%s%d", &p->name, &p->rollNum);
    p->next = head;
    head = p;
}

void search()
{
    int key;
    int found = 0;
    struct node *p;
    printf("\nEnter Search num");
    scanf("%d", &key); // 30 40

    p = head;

    while (p != NULL)
    {
        if (p->rollNum == key)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        printf("\n%d Present", key);
    }
    else
    {
        printf("\n%d not PResent", key);
    }
}

void addAny()
{
    int sourceRNum;
    struct node *p; 
    int found =0;
    printf("\nEnter Source Roll Num");
    scanf("%d", &sourceRNum);

    p = head;

    while (p != NULL)
    {
        if (p->rollNum == sourceRNum)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        struct node *tmp = malloc(sizeof(struct node));

        printf("\nEnter name and rollNUm");
        scanf("%s%d", &tmp->name, &tmp->rollNum);
        
        
        tmp->next = p->next; 
        p->next = tmp; 
        

    }
    else
    {
        printf("\n%d not PResent", sourceRNum);
    }
}

int main()
{

    int choice;

    while (1)
    {
        printf("\n0 for exit\n1 For Add Student\n2 for List\n3 for Add Beg\n4 for search\n5 For Add Any\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addNode(); // last
            break;
        case 2:
            display();
            break;
        case 0:
            exit(0);
        case 3:
            addBeg();
            break;
        case 4:
            search();
            break;
        case 5:
            addAny();
            break;

        default:
            break;
        }
    }

    return 0;
}