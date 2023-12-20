#include<stdio.h>
int main(){
    int arr[100];
    int i,x,pos,n=10;
    for(i=0;i<n;i++){
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }
    printf("\n");
    x=50;
    pos=2;
    n++;
    for(i=n-1;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[pos]=x;
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
