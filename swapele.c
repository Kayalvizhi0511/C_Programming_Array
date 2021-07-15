int main(){
int arr[100],i,j,n,temp;
printf("enter number of arrays to be printed ");
scanf("%d", &n);
printf("enter the elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("swapped order ");
for(i=0,j=n-1;i<n/2;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
