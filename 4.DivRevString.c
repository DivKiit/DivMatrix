#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
Reverse string*/
int main(){
  int i,Len;
  char Div[45], Rev[45];

  printf("Input the string - ");
  gets(Div);
  Len = strlen(Div);
  // Reversing Entire String
  for (i=0;i<Len;i++){
    Rev[i]=Div[Len-i-1];}

  printf("\nRev of String is - %s",Rev);

  printf("\n");

  return 0;}
