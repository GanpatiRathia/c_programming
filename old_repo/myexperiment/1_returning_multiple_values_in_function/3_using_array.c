#include<stdio.h>
void compare(int a,int b,int arr[]){
    if (a>b)
    {
        arr[1]=a;
        arr[0]=b;
    }
    else
    {
        arr[1]=b;
        arr[0]=a;
    }
}
int main(){
    int a,b,arr[2];
    printf("Enter Two numbers to compare : ");
    scanf("%d%d",&a,&b);
    compare(a,b,arr);
    printf("%d > %d",arr[1],arr[0]);
}