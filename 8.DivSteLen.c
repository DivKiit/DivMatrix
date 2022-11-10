#include<stdio.h>
//#include<string.h>
/*Divyaranjan Sahoo
Length of string*/

// With Libraries
/*int main(){
  char Div[45];
  printf("Input the string - ");
  gets(Div);

  printf("\nThe length of string '%s' is %u\n",Div,strlen(Div));

  return 0;}*/

// Without Libraries
int main(){
  int i=0,l=-1; char Div[45],a;

  printf("Input the string here - ");
  gets(Div);

  do {l++; a=Div[i]; i++;} while(a!=0);

  printf("\nThe length of string is %i\n ",l);

  return 0;}
