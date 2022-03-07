#include<stdio.h>
#include<conio.h>
#define infinity 1000
int i, j, n;
void dijkstra(int arr[n][n], int str_node)
{
    int cost[n][n], dist[n], pred[n];
    int vstd[n], count, min_dist, nxt_node;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(arr[i][j] == 0)
                cost[i][j] = infinity;
            else
                cost[i][j] = arr[i][j];
    for(i=0; i<n; i++){
        dist[i] = cost[str_node][i];
        pred[i] = str_node;
        vstd[i] = 0;
    }
    dist[str_node] = 0;
    vstd[str_node] = 1;
    count = 1;
    while(count < n-1){
        min_dist = infinity;
        for(i=0; i<n; i++)
        if(dist[i] < min_dist && (!vstd[i])){
            min_dist = dist[i];
            nxt_node = i;
        }
    }
}