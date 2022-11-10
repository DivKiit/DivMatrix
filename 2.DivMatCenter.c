#include<stdio.h>
/*Divyaranjan Sahoo
Center Element  */
int main(){
  int i,j,d,l;
  printf("Enter the dimension of square matrix - ");
  scanf("%i",&d);
  //Assimilating values of square matrice of dim - d
  int D[d][d];
  for (i=0;i<d;i++){
    for (j=0;j<d;j++){
      printf("Input Matrix ~  [%i][%i] index value - ",i,j);
      scanf("%i",&D[i][j]);}}
  // For even four center values is achieved
  if (d%2==0){
    int l = d/2;
    printf("\nFirst center element is %i - ",D[l-1][l-1]);
    printf("\nSecond center element is %i - ",D[l-1][l]);
    printf("\nThird center element is %i - ",D[l][l-1]);
    printf("\nFourth center element is %i - \n",D[l][l]);}
  //One center value for odd dimension
  if (d%2==1){
    l = d/2;
    printf("\nThe center element is %i\n",D[l][l]);}

  return 0;}
