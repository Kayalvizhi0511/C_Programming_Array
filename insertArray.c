#include<stdio.h>
int main(){
int arr[100],i,n,pos,val;
printf("enter number of arrays to be printed ");
scanf("%d", &n);
printf("enter the elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("enter position where the element to be inserted ");
scanf("%d", &pos);

printf("enter the value ");
scanf("%d", &val);
for(i=n-1;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=val;
    printf("Final Array ");
    for(i=0;i<n;i++)
        printf("%d", arr[i]);
}
