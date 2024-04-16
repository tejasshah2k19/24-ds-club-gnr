#include "stackChar.c" 

int main(){

    char str[50];
    int i; 

    printf("\nEnter the string");
    scanf("%s",&str);  
    
    for(i=0;i<strlen(str);i++) {
        push(str[i]); 
    }

    printf("\nstr = %s",str); 
    printf("\nrev => ");
    display();

    return 0; 
}
