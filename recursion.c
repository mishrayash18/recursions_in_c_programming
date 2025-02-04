// // FACTORIAL
// #include <stdio.h>
// int factorial(int a) {
//     if (a==1 || a==0) return 1;     // base case
//     return a*factorial(a-1);
// }

// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n );
//     printf("%d",factorial(n));
//     return 0;
// }





// // N TO 1 USING RECURSION
// #include <stdio.h>
// void revcount(int a) {
//     if (a==0) return;       // base case
//     printf("%d\n",a);
//     revcount(a-1);
//     return;
// }

// int main() {
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);
//     revcount(n);
//     return 0;
// }





// // 1 TO N USING RECURSION
// #include <stdio.h>
// void increasing(int x,int n) {
//     if (x>n) return;        //base case
//     printf("%d\n",x);
//     increasing(x+1,n);
// }
// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     increasing(1,n);
//     return 0;
// }




// // 1 TO N AFTERCALL  
// // VERY IMPORTANT
// #include <stdio.h>

// void increasing(int a) {
//     if (a==0) return;       // base case    
//     increasing(a-1);
//     printf("%d\n",a);
//     return;
// }

// int main() {
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);
//     increasing(n);
//     return 0;
// }





// // DECREASING INCREASING
// #include <stdio.h>

// void decinc(int a) {
//     if (a==0) return;       // base case
//     printf("%d\n", a);    
//     decinc(a-1);
//     printf("%d\n",a);
//     return;
// }

// int main() {
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);
//     decinc(n);
//     return 0;
// }





// // SUM OF 1 TO N
// #include <stdio.h>
// int sum(int n) {
//     if (n==0||n==1) return 1;       //base case
//     return n + sum(n-1);
// }

// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     printf("%d", sum(n));
//     return 0;
// }





// // A RAISED TO B
// #include <stdio.h>
// int power(int a,int b) {
//     if (b==0) return 1;     // base case    
//     return a*power(a,b-1);
// }
// int main() {
//     int a,n,p;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     printf("enter the power: ");
//     scanf("%d", &p);
//     printf("%d raised to %d is %d",n,p,power(n,p));
// }




// // FIBONACCI SERIES
// #include <stdio.h>
// int fibo(int n) {
//     if (n==1|n==2) return 1;        // base case
//     return fibo(n-1) + fibo(n-2);
// }
// int main() {
//     int n;
//     printf("enter the number of element: ");
//     scanf("%d", &n);
//     printf("%d",fibo(n));
// }





// // STAIR PATH (2 JUMPS MAX)
// #include <stdio.h>
// int stair(int n) {
//     if (n==1|| n==2) return n;
//     int totalways = stair(n-1) + stair(n-2);
//     return totalways;
// }
// int main() {
//     int n;
//     printf("enter the numbr of stairs: ");
//     scanf("%d", &n);
//     printf("the number of ways to reach %d stairs is %d",n,stair(n));
//     return 0;
// }





// // STAIR PATH (3 JUMPS MAX)
// #include <stdio.h>
// int stair(int n) {
//     if (n==1|| n==2 || n==3) return n;
//     int totalways = stair(n-1) + stair(n-2) + stair(n-3);
//     return totalways;
// }
// int main() {
//     int n;
//     printf("enter the numbr of stairs: ");
//     scanf("%d", &n);
//     printf("the number of ways to reach %d stairs is %d",n,stair(n));
//     return 0;
// }





// // A RAISED TO B (LOGARITHMIC MORE EFFICIENT)
// #include <stdio.h>
// int powerlog(int a,int b) {
//     if (b==1) return a;     // base case
//     int x = powerlog(a,b/2);
//     if (b%2==0) {
//         return x*x;
//     }    
//     else{
//         return x*x*a;
//     }
// }
// int main() {
//     int a,n,p;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     printf("enter the power: ");
//     scanf("%d", &p);
//     printf("%d raised to %d is %d",n,p,powerlog(n,p));
// }





// // ARRAY SUM USING RECURSION
// #include <stdio.h>
// int sum(int arr[],int n) {
//     if (n==0) return 0;
//     return arr[n-1] + sum(arr,n-1);
// }
// int main() {
//     int i,n;
//     printf("enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("enter the elements of the array: ");
//     for (i=0;i<3;i++) {
//         scanf("%d", &arr[i]);        
//     }
//     printf("the sum of the elements of array is %d", sum(arr,n));
//     return 0;
// }





// // MAZE PATH
// #include <stdio.h>
// int maze(int cr,int cc,int er,int ec) {     // current row,current column,end row,end column

//     int rightways = 0;
//     int downways = 0;
//     if (cr==er && cc ==ec) return 1;

//     if (cr==er) {
//         rightways += maze(cr,cc+1,er,ec);
//     }
//     if (cc == ec) {
//         downways += maze(cr+1,cc,er,ec);
//     } 
//     if (cr<er && cc<ec) {
//         rightways += maze(cr,cc+1,er,ec);
//         downways += maze(cr+1,cc,er,ec);

//     }
//     int totalways = rightways+downways;
//     return totalways;
// }
// int main() {
//     int n,m;
//     printf("enter the number of rows of the maze: ");
//     scanf("%d", &n);
//     printf("enter the number of columns of the maze: ");
//     scanf("%d", &m);
//     int noOfways = maze(1,1,n,m); 
//     printf("number of ways to reach is %d", noOfways);
//     return 0;
// }





// // Pre-In-Post
// #include <stdio.h>
// void preinpost(int n) {
//     if (n==0) return;
//     printf("pre %d\n", n);
//     preinpost(n-1);
//     printf("in %d\n", n);
//     preinpost(n-1);
//     printf("post %d\n", n);
//     return;
// }
// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);

//     preinpost(n);

//     return 0;
// }




