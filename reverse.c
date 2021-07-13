int main(){
int arr[100],i,n;
printf("enter number of arrays to be printed ");
scanf("%d", &n);
printf("enter the elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("Reverse order ");
for(i=n-1;i>=0;i--)
    printf("%d ",arr[i]);
}
