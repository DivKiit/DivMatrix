#include<stdio.h>
/*Divyaranjan Sahoo
Word wise in sentence*/
int main(){
  char DivStr[30]; int i;

  printf("Enter the Sentence here - ");
  gets(DivStr);
  printf("\n");
  // Differentiating word wise
  for(i=0;i<strlen(DivStr);i++){
    printf("%c",DivStr[i]);
    //If space is recognised
    //New line is commanded
    if(DivStr[i]==32)
    printf("\n");}

  printf("\n");

  return 0;}
