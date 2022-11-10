#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n,m;
    char str[100],substr[100],substr2[100];
    gets(str);
    printf("\nEnter the position from which to start and length of the substring: ");
    scanf ("%d%d",&m,&n);
    i=m;
    int v=n;
    while(str[i] !='\0' &&n>0){
      substr[j] = str[i];
      i++;
      j ++;
      n--;
    }
    substr[j] = '\0';
    printf ("The substring is : ");
    puts(substr);
    //if(v>6){v--;}

    strncpy(substr2, str+m,v+m-2);
    printf ("The substring is : ");
    puts(substr2);
    return 0;
}
