#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
Comparing Strings*/

// With Library
int main(){
  char StrA[45];
  char StrB[45];

  printf("Input the first string - ");
  gets(StrA);
  printf("Input the Second string - ");
  gets(StrB);

  int Div = strcmp(StrA,StrB);

  printf("\n%i\n",Div);

  switch(Div){
    case 1: printf("\nStrA > StrB\n"); break;
    case 0: printf("\nStrA = StrB\n"); break;
    case -1: printf("\nAlphaStr < StrB\n");break;}

  return 0;}

// Without Library
/*int main(){
  char StrA[45],StrB[45];
  int i,j=0,k=0,LenA=0,LenB=0,Div;
  printf("Input the first string - "); gets(StrA);
  printf("Input the Second string - "); gets(StrB);

  do{LenA++;j++;} while(StrA[j]!='\0');
  do{LenB++;k++;} while(StrB[k]!='\0');

  for(i=0;i<=LenA && i<=LenB;i++){
    if(StrA[i]>StrB[i]) {Div=1;break;}
    else if(StrA[i]==StrB[i]) {Div=0;continue;}
    else if(StrA[i]<StrB[i]) {Div=-1;break;}
  printf("%i",Div);}

  switch(Div){
    case 1: printf("\n1\nStrA > StrB\n"); break;
    case 0: printf("\n0\nStrA = StrB\n"); break;
    case -1: printf("\n-1\StrA < StrB\n");break;}

  return 0;}*/
