#include<stdio.h>
//#include<string.h>
/*Divyaranjan Sahoo
Copying string*/

// With Libraries
/*int main(){
  char Div[45];
  char DivCopyString[45];
  printf("Input the string - ");
  gets(Div);
  strcpy(DivCopyString,Div);
  printf("\nThe copied string is - ");
  puts(DivCopyString);
  printf("\n");

  return 0;}*/

// Without Library
int main(){
  char Div[45];
  char DivCopyString[45];
  int i=0;
  printf("Input the string - ");
  gets(Div);

  do {DivCopyString[i]=Div[i]; i++;} while (Div[i]!='\0');
  printf("\nThe copied string is - ");

  for(i=0;Div[i]!='\0';i++){
    printf("%c",DivCopyString[i]);}
  printf("\n");

  return 0;}
