#include <stdio.h>

int main() {
  int a[5];
  int n;
  int j;
  int tar_int;

  scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &n);
  for (int i=0; i<n; i++) {
    tar_int=0;
    for(j=0;j<5;j++){
      if ((i+1)%a[j]==0){
        tar_int++;
        printf("%d",j);
      }
    }
    if(tar_int==0){
      printf("-");
    }
    printf("\n");
    /* Imprime resultado da n-esima iteracao do scheduler */
  }

  return 0;
}
