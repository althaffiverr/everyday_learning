#include <stdio.h>
int main(){
  int n,m,i,j;
  printf("enter the number of rows and columns\n");
  scanf("%d%d",&n,&m);
int arr[n][m];
printf("enter the elements of raw no=1\n");
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
    scanf("%d",&arr[i][j]);
  }
  printf("enter the elements of raw no=%d\n",i+2);
}
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
    printf("%d",arr[i][j]);
    printf("\t");
  }
  printf("\n");
}
return 0;
}