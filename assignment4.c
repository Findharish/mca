// floyds triangle
#include<stdio.h>
int main(){
    int i,j,rows,n=1;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<rows;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}


// sand glass pattern
// #include<stdio.h>
// int main(){
//     int i,j,rows;
//     printf("enter the number of rows: ");
//     scanf("%d",&rows);
//     for(i=rows;i>=1;i--){
//         for(j=1;j<=rows-i;j++){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(i=2;i<=rows;i++){
//         for(j=1;j<=rows-i;j++){
//            printf(" ");
//        }
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//    }
//     return 0;
// }

// butterfly pattern
// #include<stdio.h>
// int main(){
//     int i,j,rows;
//     printf("enter the number of rows: ");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         for(j=1;j<=rows-i;j++){
//             printf("  ");
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=rows-1;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         for(j=1;j<=rows-i;j++){
//             printf("  ");
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// palindrome 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of rows\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("  ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         for(int j=i-1;j>0;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//odd number
// #include<stdio.h>
// int main(){
//     int i,j,rows,n=1;
//     printf("enter the number of rows: ");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++){
//         for(j=1;j<=rows-i;j++){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("%d ",n);
//             n+=2;
//         }
//         printf("\n");
//     }
//     return 0;
// }
