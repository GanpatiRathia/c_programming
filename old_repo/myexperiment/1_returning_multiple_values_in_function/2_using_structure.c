#include<stdio.h>
typedef struct BigSmall
{
    int big,small;
}mystruct;

mystruct compare(int a,int b){
    mystruct s;
    if(a>b){
        s.big = a;
        s.small=b;
    }
    else{
        s.big = b;
        s.small=a;
    }
    return s;
}

int main(){
    int a,b;
    mystruct result;
    printf("Enter two number for comparison : ");
    scanf("%d%d",&a,&b);
    result = compare(a,b);
    printf("%d is bigger than %d",result.big,result.small);
    return 0;
}
