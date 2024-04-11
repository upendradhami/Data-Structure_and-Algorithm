#include<stdio.h> 
#include<conio.h>

#define MaxSize 10
int STACK[MaxSize] ;
int top = -1;
void push(); 
void pop(); 
void traverse();

int main()
 {
   int choice; int check;
   do{
    printf("\n");
     printf("-------------------STACK------------------\n");
   printf("1.PUSH operation \n 2.POP operation \n 3.traverse operation \n ");
   printf("---------------------------------------------\n");
   printf("Enter your choice : \n");
   scanf("%d",&choice);

   switch (choice)
   {
    case 1 : push(); break;
    case 2 : pop(); break;
    case 3 : traverse(); break;
    default : printf("invalid move \n ");
   }

   printf("press 1 for continue and 2 for exit the enviroment");
   scanf("%d",check);

   }while(choice !=4);

   return 0;
 }

 void push(){int n;
    if(top == MaxSize -1){
      printf("stack is overflow \n");
    }else{
       printf("push the element in the top of stack : \n");
       scanf("%d",&n);
              top ++;
       STACK[top]=n;
    }
 }

 void pop(){int n;
  if(top == -1){
    printf("stack is emtpty \n");
  }else {
      n=STACK[top];
      top --;
      printf("poped element is : %d \n",n);
  }
 }

 void traverse(){
  if (top == -1){
    printf("stack is empty \n");
  }else {printf("elements in the stack are : \n");
    for(int i=top; i>=0; i--){
       printf("  %d \n ",STACK[i]);
    }   
  }
 }
