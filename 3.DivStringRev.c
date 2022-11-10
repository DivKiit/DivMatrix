#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
Reverse order string*/
int main(){
  int i; char Div[45];

  printf("Input the string - ");
  gets(Div);

  printf("\nIterative rev of String is - ");
  //Iteration and printing vals
  for (i=strlen(Div)-1;i>=0;i--){
    printf("%c",Div[i]);}

  printf("\n");

  return 0;}
