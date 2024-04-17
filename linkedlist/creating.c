#include<stdio.h> 
#include<conio.h>

struct node{
    int data;
    struct node *next;
}*head= NULL,*ptr,*new1;

void create()
{ 
    int x;
    char chr;
    printf("enter the data you want to add in the linked list \n");
    scanf("%d",&x);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = x;
    head->next = NULL;
    ptr = head;

    printf("do you want to continue ?\n");
   chr =getche();

    while(chr == 'y' || chr =='Y'){
        printf("enter the data you want to add in new node: \n");
        scanf("%d",&x);
        new1= (struct node *)malloc(sizeof(struct node));
        new1->data = x;
        new1->next = NULL;
        ptr->next = new1;
        ptr = ptr->next;
        printf("want to continue?\n");
        chr =getche();
    }
}

   
void display()
{ if(head == NULL){
    printf("linked list is empty \n");
}else{
    ptr = head;
    while( ptr != NULL){
        printf("%d \t",ptr->data);
        ptr=ptr->next;
    }
}
    
}


 int main()
 {
    int ch;
    system("cls");
   do{
    printf("----------------linked list-------------------\n");
    printf("-----------------------------------------------\n");
    printf("1.create \n 2.insert_first\n 3.insert_between \n 4.insert_last \n  5.delete_node \n 6.delete_node \n 7.delete_last \n 8.traverse \n 9.exit \n");
    printf("enter your choice you want to perform operation \n");
    scanf("%d",&ch);

    switch (ch)

    {
    case 1 : create();
        break;
    case 2: display();
        break;
    
    default: printf("invalid operation \n ");
        break;
    }

   }while (ch != 5);
   
    

 return 0;
 }