#include<stdio.h>
int large_number(int a, int b);  //function prototype
int main()
{
    int a,b,max;
    scanf("%d%d", &a, &b);
    max = large_number(a, b); //call user-defined function
    printf("max = %d", max);
    return 0;
}

int large_number(int x, int y){ //user defined function definition
int result = (x>y) ? x : y;
return result;                 //return statement
}

