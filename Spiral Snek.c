#include<stdio.h>

int main(){
int i,j,n,m;
 scanf("%d %d", &m, &n);
int arr[m][n];

for (i = 0; i < m; i++){
    for (j = 0; j < n; j++)
         scanf("%d", &arr[i][j]);
}

for(i=0;i<m;i++){
    if (i % 2 == 0) {
         for (j = 0; j < n; j++)
            printf("%d ",arr[i][j]);
      } else{
         for (j = n - 1; j >= 0; j--)
            printf("%d ",arr[i][j]);
      }

    printf("\n");
    
}

}

