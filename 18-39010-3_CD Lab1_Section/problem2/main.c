#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[50];
void push(char);
int top = -1;
void position_top();
void pop();

void main(){
     int i;
     char j[50];
     printf("Enter Expression:");
     scanf("%s", &j);
     for (i = 0; j[i] != '\0';i++)
     {
      if (j[i] == '(')
      {
       push(j[i]);
      }
      else if (j[i] == ')')
      {
       pop();
      }
     }
     position_top();
}
void push(char j){
     stack[top] = j;
     top++;
    }
void pop()
    {
     if (top == -1)
     {
      printf("Expression is Invalid\n");
      return;
     }
     else
     {
      top--;
     }
    }
void position_top()
    {
     if (top == -1)
      printf("\nExpression Is Valid");
     else
      printf("\nExpression Is Invalid");
    }
