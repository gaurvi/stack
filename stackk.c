#include<stdio.h>
#define size 4
struct stack
{
    int top;
    int element[size];
};
typedef struct stack Stack;
void push(int);
int pop();
void display();
Stack s;
int ch,value;
void main()
{
    while(ch!=4)
    {
        printf("1......push\n");
        printf("2......pop\n");
        printf("3......display\n");
        printf("4......exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("enter the value you want to push\n");
            scanf("%d",&value);
            push(value);
            printf("you have pushed a value");
            break;
        case 2:
            printf("popped value is\n");
            value=pop();
            printf("%d",value);
            printf("you have just popped a value\n");
            break;
        case 3:
            printf("current status of stack");
            display();
            break;
        case 4:
            printf("trying to exit");
            return;
        default:
            printf("wrong input");

        }
    }
}
int pop()
{



    if(s.top==(-1))
    {
        printf("cant be popped bcz empty");
    }
    else
    {
        value=s.element[s.top];
        s.top--;
        return(value);
    }

}


void push (int value)
{

    if (s.top < (size - 1))
    {
      s.top++;
    s.element[s.top]=value;
    }


    }


void display()
{
    if(s.top==(-1))
    {
        printf("stack is empty");
    }
    else
    {
        int i;
        for(i=s.top; i>=0; i--)
        {
            printf("%d\n",s.element[i]);
        }
    }
}







