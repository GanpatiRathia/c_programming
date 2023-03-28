void Main()
{
    int a=5,*b;
    b = &a;
    printf("Address of A = %5d \nvalue of A = %5d \nAddress of B = %5d",b,*b,&b);
}