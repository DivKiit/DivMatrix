#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
SubStrings*/

// With Library
int main(){
  int Len,Init;
  char DivStr[45],DivSubStr[Len];
  printf("Enter the string - ");
  gets(DivStr);
  printf("Substring Init Index ");
  printf("\n(Index starts from [1]) -");
  scanf("%i",&Init);
  printf("Len of the substring - ");
  scanf("%i",&Len);
  //Using memcpy to create substring
  memcpy(DivSubStr,&DivStr[Init-1],Len);
  DivSubStr[Len]='\0';
  printf("\nSubstring is - %s\n",DivSubStr);
  return 0;}

//Without Library
/*int main(){
  int i,Init,Len;
  char DivStr[45],DivSubStr[45];

  printf("Enter the string - ");
  gets(DivStr);
  printf("\nSubstring Init Index ");
  printf("\n(Index starts from [1]) -");
  scanf("%i",&Init);
  printf("\nLen of the substring - ");
  scanf("%i",&Len);

  for (i=Init;i<Init+Len;i++){
      DivSubStr[i-Init]=DivStr[i-1];}
  DivSubStr[Len]='\0';

  printf("\nSubstring is - %s\n",DivSubStr);

  return 0;}*/
