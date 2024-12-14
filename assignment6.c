// convert fahrenheit to celsius
// #include<stdio.h>
// float convertor(float f){
//     return (f-32)*5/9;
// }
// int main()
// {
//     float f;
//     printf("enter the temperature in fahrenheit: ");
//     scanf("%f",&f);
//     printf("the temperature in celsius is %2f",convertor(f));
//     return 0;
// }

// sum of natural number
// #include<stdio.h>
// int sum(int n){
//     return n*(n+1)/2;
// }
// int main(){
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     printf("the sum of natural is %d",sum(n));
//     return 0;
// }

// swap variables using call by reference
// #include<stdio.h>
// void swap(int *p,int *q){
//     int temp=*p;
//     *p=*q;
//     *q=temp;
// }
// int main(){
//     int a,b;
//     printf("enter a and b :");
//     scanf("%d%d",&a,&b);
//     printf("before swap value of a=%d and b=%d\n",a,b);
//     swap(&a,&b);
//     printf("after swap value of a=%d and b=%d\n",a,b);
//     return 0;
// }

// maximum using call by value
// #include<stdio.h>
// int max(int p,int q){
//     return (p>q)?p:q;
// }
// int main(){
//     int a,b;
//     printf("enter a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("the maximum between %d and %d is %d",a,b,max(a,b));
//     return 0;
// }

// gcd among two numbers using recursion
// #include<stdio.h>
// int gcd(int p,int q){   
//     if(q==0)
//         return p;
//     else
//         return gcd(q,p%q);
// }
// int main(){
//     int a,b,max,min;
//     printf("enter a and b\n");
//     scanf("%d%d",&a,&b);
//     max=(a>b)?a:b;
//     min=(a>b)?b:a;
//     printf("GCD of %d and %d is %d",a,b,gcd(max,min));
//     return 0;
// }

// conversion decimal to binary using recursion
// #include<stdio.h>
// int findbinary(int n){
//     if(n==0)
//         return 0;
//     else
//         return (n%2)+10*(findbinary(n/2));
// }
// int main(){
//     int a;
//     printf("enter a number: \n");
//     scanf("%d",&a);
//     printf("binary representation of decimal number %d is %d ",a,findbinary(a));
//     return 0;
// }