#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
Recognising statement parameters*/
int main(){
  char DivStr[75];
  int i,Alpha=0,Num=0,Special=0,Len;

  printf("Enter the sentence here - ");
  gets(DivStr);
  Len = strlen(DivStr);

  for (i=0;i<Len;i++){
    if(DivStr[i]>='a' && DivStr[i]<='z') Alpha++;
    else if (DivStr[i]>='A'&& DivStr[i]<='Z') Alpha++;
    else if(DivStr[i]>='0' && DivStr[i]<='9') Num++;
    else if(DivStr[i]==32) continue;
    else Special++;}
/* Snippet - Using if rather than else if cause value error
   since iteration lets all chr count in special Characters*/
  printf("\nAlgorithm Results [After Reading] ~ Nos of \n");
  printf("A.Alphabets - %i \nB.Numbers = %i \n",Alpha,Num);
  printf("C.Special Characters - %i\n",Special);
  return 0;}
