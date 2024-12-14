// bitwise operation
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the a and b\n");
    scanf("%d%d", &a, &b);
    printf("here we print all the bitwise operators\n");
    c = a & b;
    printf("a&b=%d\n", c);
    c = a / b;
    printf("a|b=%d\n", c);
    c = a ^ b;
    printf("a^b=%d\n", c);
    c = a >> 2;
    printf("a>>2=%d\n", c);
    c = a << 2;
    printf("a<<2=%d\n", c);
    return 0;
}

// swap two numbers
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter the two numbers: \n");
//     scanf("%d%d", &a, &b);
//     printf("before swapping a=%d,b=%d\n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("after swapping a=%d,b=%d\n", a, b);
//     return 0;
// }

// greatest no using conditional operator
// #include<stdio.h>
// int main(){
//     int a,b,c,max;
//     printf("enter the three numbers:\n");
//     scanf("%d%d%d",&a,&b,&c);
//     max=a>b?a>c?a:c:b>c?b:c;
//     printf("largest number is %d",max);
//     return 0;
// }

// convert time to hour, minutes using seconds
//  #include<stdio.h>
//  int main(){
//      int h,m,s;
//      printf("enter the time in seconds\n");
//      scanf("%d",&s);
//      h=s/3600;
//      s=s%3600;
//      m=s/60;
//      s=s%60;
//      printf("hours=%d,minutes=%d,seconds=%d",h,m,s);
//      return 0;
//  }

// even or odd using ternary operator
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("enter the number:\n");
//      scanf("%d",&n);
//      (n%2==0)?(printf("%d is even number\n",n)):(printf("%d is odd number\n",n));
//      return 0;
//  }