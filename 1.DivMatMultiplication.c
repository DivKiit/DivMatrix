#include<stdio.h>
/*Divyaranjan Sahoo
Matrix Multiplication */
int main(){
  int i,j,k,a,b,c;
  printf("A Matrix nos of Rows - ");
  scanf("%i",&a);
  printf("\nA Mat Col or B Mat Row - ");
  printf("\n(Matrices can be multiplied only if");
  printf("\nthe Cols[A] == Rows[B] condition is True - ");
  scanf("%i",&b);
  printf("\nB Matrix Cols - ");
  scanf("%i",&c);

  int A[a][b], B[b][c], DivMat[a][c];
  printf("\n");
  //Input values in First mat
  for (i=0;i<a;i++){
    for (j=0;j<b;j++){
      printf("A Matrix ~ index [%i][%i] - ",i+1,j+1);
      scanf("%i",&A[i][j]);}}
    printf("\n");
  //Input values in Second mat
  for (i=0;i<b;i++){
    for (j=0;j<c;j++){
      printf("B Matrix ~ index [%i][%i] - ",i+1,j+1);
      scanf("%i",&B[i][j]);}}

  //Elemental Multiplication
  for (i=0;i<a;i++){
    for (j=0;j<b;j++){
      DivMat[i][j]=0;
      for (k=0;k<c;k++){
      DivMat[i][k]+=A[i][j]*B[j][k];}}}

printf("\n Res Matrice\n");
  for (i=0;i<a;i++){
    for (k=0;k<c;k++){
      printf(" %i ",DivMat[i][k]);}
    printf("\n");}

    return 0;}
