#include<stdio.h> 
#include<conio.h>

struct node{
    int data;
    struct node *next;
}*head= NULL,*ptr,*new1, *pre ,*nex;

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

void insert_start(){
    int x;
    printf("enter the element at the start of the node: \n");
    scanf("%d",&x);
    new1 = (struct node*)malloc(sizeof (struct node));
    new1->data =x;
    new1->next = NULL;
    new1->next = head;
    head = new1;
}

void insert_last(){
    if(head == NULL){
        printf("linked list not found\n");

    }else
    {
       int x;
        printf("enter the element at the last of the noce: \n");
        scanf("%d",&x);
        new1 = (struct node*)malloc(sizeof(struct node));
        new1->data = x;
        new1->next = NULL;
        ptr = head;

        if(ptr!= NULL)
        {
          while(ptr->next != NULL)
          {
              ptr = ptr->next;
           }
              ptr->next = new1;

        } else{
                    head= new1;
                  }
    }
    

}
   void insert_between(){
    int x,p;
    printf("enter the element you want to add : \n");
    scanf("%d",&x);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=x;
    new1->next=NULL;
     
    printf("enter the position at which you want to add element: \n");
    scanf("%d",&p);
    nex=head;
    for(int i=1; i<p; i++){
        pre = nex;
        nex = nex->next;
    }

    pre->next =new1;
    new1->next =nex;
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
    case 2:  insert_start();
        break;
    case 3: insert_last();
        break;
    case 4 : insert_between();
        break;
    case 5 : display();
    
    default: printf("invalid operation \n ");
        break;
    }

   }while (ch != 6);
   
    

 return 0;
 }