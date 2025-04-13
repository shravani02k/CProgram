#include<stdio.h>
// data types : int,char,float,double

void main()
{
    int num1;// declaration
    // default value is garbage
    num1=10;// assignment

    int num2; // initialization : declaration + assignment
    num2=20;

    char ch='A';
    float fvar=1.6;
    double dvar=2.3;

    printf("enter the value of num1=%d\n",num1);
    //%d is the format specifier for int
    // output : The value of num1 is 10

    printf("ch=%c\n",ch);
    printf("favr=%.2f\n",fvar);
    // by default 6 digits are printed after the decimal point
    // to restrict we can sepcify %.3lf

    printf("double value=%.3lf\n",dvar);
    // lf : long float
    // ch = A
}