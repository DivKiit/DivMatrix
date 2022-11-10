#include<stdio.h>
#include<string.h>
/*Divyaranjan Sahoo
Concatenating Strings*/

// With Libraries
int main(){
  char AlphaStr[15];
  char BetaStr[15];

  printf("Input the first string - ");
  gets(AlphaStr);

  printf("Input the Second string - ");
  gets(BetaStr);

  printf("\nThe concatenated string is - ");
  printf("%s\n",strcat(AlphaStr,BetaStr));

  return 0;}

  //Without Libraries
  /*int main(){
    char AlphaStr[15], BetaStr[15];
    int LenAlpha,LenBeta,i;

    printf("Input the first string - ");
    gets(AlphaStr);
    LenAlpha = strlen(AlphaStr);
    printf("Input the Second string - ");
    gets(BetaStr);
    LenBeta = strlen(BetaStr);
    char ConStr[30];
    for (i=0;i<LenAlpha;i++){
      ConStr[i]=AlphaStr[i];}
    for (i=LenAlpha;i<LenAlpha+LenBeta;i++){
      ConStr[i]=BetaStr[i-LenAlpha];}
    ConStr[LenAlpha+LenBeta]='\0';
    printf("\nConcatenated String\n");
    printf("%s + %s = %s \n",AlphaStr,BetaStr, ConStr);
    return 0;}*/
