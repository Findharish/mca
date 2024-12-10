// find 2nd largest no in an array
// #include<stdio.h>
// int main(){
//     int n;
//     start:
//     printf("enter the size of an array\n");
//     scanf("%d",&n);
//     if(n<2){
//         printf("size of an array must be greater than 2.\n");
//         goto start;
//     }
//     int arr[n];
//     printf("enter the elements of an array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int first=arr[0];
//     int second=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i]>first){
//             second=first;
//             first=arr[i];
//         }
//         else if(arr[i]>second && arr[i]!= first){
//             second=arr[i];
//         }
//     }
//     if(second==-1){
//         printf("no second largest element found\n");
//     }
//     else{
//         printf("the second largest element is %d\n",second);
//     }
//     return 0;
// }


// combine or merge array
// #include<stdio.h>
// int main(){
//     int s1,s2,i,j;
//     printf("enter the size of the first array: \n");
//     scanf("%d",&s1);
//     int a1[s1];
//     printf("Enter the elements of the first array:\n");
//     for (int i=0;i<s1;i++) {
//         scanf("%d",&a1[i]);
//     }
//     printf("enter the size of the second array: \n");
//     scanf("%d",&s2);
//     int a2[s2];
//     printf("Enter the elements of the second array:\n");
//     for (int i=0;i<s2;i++) {
//         scanf("%d",&a2[i]);
//     }
//     int ras=s1+s2;
//     int result[ras];
//     for(i=0;i<s1;i++){
//         result[i]=a1[i];
//     }
//     for(j=0;j<s2;j++){
//         result[i+j]=a2[j];
//     }
//     printf("merged array: \n");
//     for(i=0;i<ras;i++){
//         printf("%d\t",result[i]);
//     }
//     return 0;
// }

// array palindrom or not
// #include<stdio.h>
// int main(){
//     int size,a=1;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<size/2;i++){
//         if(arr[i]!=arr[size-i-1]){
//             a++;
//         }
//     }
//     if(a==1){
//         printf("The array is a palindrome.\n");
//     } 
//     else {
//         printf("The array is not a palindrome.\n");
//     }
//     return 0;
// }

// even or odd count
// #include<stdio.h>
// int main(){
//     int size,even=0,odd=0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     printf("there is %d even and %d odd numbers in the array.\n",even,odd);
//     return 0;
// }

// matrix multiplication
// #include<stdio.h>
// int main(){
//     int r1,r2,c1,c2;
//     printf("Enter rows and columns for Matrix 1: ");
//     scanf("%d %d", &r1, &c1);
//     int mat1[r1][c1];
//     printf("Enter elements of Matrix 1:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter rows and columns for Matrix 2: ");
//     scanf("%d %d", &r2, &c2);
//     int mat2[r2][c2],result[c1][r2];
//     printf("Enter elements of Matrix 2:\n");
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     if (c1 != r2) {
//         printf("Matrix multiplication not possible. Number of columns in Matrix 1 must equal rows in Matrix 2.\n");
//         return 0;
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             result[i][j]=0;
//             for(int k=0;k<c1;k++){
//                 result[i][j]+=mat1[i][k]*mat2[k][j];
//             }
//         }
//     }
//     printf("Resultant Matrix:\n");
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             printf("%d ",result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }