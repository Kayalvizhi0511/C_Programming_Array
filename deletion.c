#include<stdio.h>
int main(){
int arr[100],i,n,pos,val;
printf("enter number of arrays to be printed ");
scanf("%d", &n);
printf("enter the elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("enter position where the element to be deleted ");
scanf("%d", &pos);
if(pos>=n+1)
    printf("Deletion fails!!");
else{
for(i=pos-1;i<=n-1;i++)
    arr[i]=arr[i+1];
    printf("Final Array ");
    for(i=0;i<n-1;i++)
        printf("%d", arr[i]);
}
}
