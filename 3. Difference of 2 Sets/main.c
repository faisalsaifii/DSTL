#include<stdio.h>
void main(){
    int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    printf("Enter size of set A");
    scanf("%d",&n1);
    printf("Enter element of set");
    for( i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter size of set B");
    scanf("%d",&n2);
    printf("Enter element of set");
    for( i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for( i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(b[j]==a[i])
                break;
        }
        if(j==n2){
            for(l=0;l<k;l++){
                if(c[l]==a[i])
                 break;
            }
            if(l==k){
                c[k]=a[i];
                k++;
            }
        }
        
    }
    for( i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(b[i]==a[j])
             break;
        }
        if(j==n1){
            for(l=0;l<m;l++){
                if(d[l]==b[i])
                 break;
            }
            if(l==m){
                d[m]=b[i];
                m++;
            }
        }
    }
    printf("Difference of A-B is:-\n");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
    printf("\n");
    printf("Difference of B-A is:-\n");
    for(i=0;i<m;i++)
        printf("%d ",d[i]);
    return 0;
    
}