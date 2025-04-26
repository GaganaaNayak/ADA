#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k,n,source;
  int w[50][50];
  int visited[20];
  int minwt,totalCost=0,ev=0,sv=0;
  printf("Number of vertices/nodes in graph: ");
  scanf("%d",&n);
  printf("\nEnter the weight/cost matrix: ");
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&w[i][j]);
      }
    }
    printf("\nEnter source vertex to start:");
    scanf("%d",&source);
    for(i=1;i<=n;i++){
      visited[i]=0;
      visited[source]=1;
      printf("Minimum weight/cost edge selected for spanning tree are:\n");
      for(i=1;i<n;i++){
      minwt=999;
      for(j=1;j<=n;j++){
        if(visited[j]==1){
          for(k=1;k<=n;k++){
            if(visited[k]!=1&&w[j][k]<minwt){
              sv=j;
              ev=k;
              minwt=w[j][k];
            }
          }
        }
      }
      totalCost+=minwt;
      visited[ev]=1;
      printf("%d -> %d cost= %d\n",sv,ev,minwt);
    }
    printf("\nThe total cost of minimum spanning tree is %d\n",totalCost);
    return 0;
  } }