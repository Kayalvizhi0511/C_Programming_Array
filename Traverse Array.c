#include<stdio.h>
int main(){
int arr[100],i,n;
printf("enter number of arrays to be printed ");
scanf("%d", &n);
printf("enter the elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("The elements are ");
for(i=0;i<n;i++){
printf("%d", arr[i]);
}
}
