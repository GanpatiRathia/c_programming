#include<stdio.h>
void compare(int a,int b,int* add_great,int* add_small){
    if(a>b){
        *add_great=a;
        *add_small=b;
        }
    else{
        *add_great=b;
        *add_small=a;
        }
}

int main(){
    int a,b,great,small;
    printf("Enter two numbers : ");
    scanf("%d\n%d",&a,&b);
    compare(a,b,&great,&small);
    printf("%d is bigger than %d",great,small);
    return 0;
}