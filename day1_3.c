
// size of variables
#include<stdio.h>

int main()
{
    int num1=23;
    char ch='A';
    float fnum=1.3;
    double dvar=5.3;

    printf("size of num1 variable : %d \n",sizeof(num1));
    printf("size of int : %d\n",sizeof(num1));
    printf("size allocation for ch : %d\n",sizeof(ch));
    printf("size of num1 : %d\n",sizeof(fnum));
    printf("size of dvar : %d\n",sizeof(dvar));
    printf("size of A : %d\n",sizeof('A'));
//                            size of A is
    printf("sizeof 1.3 : %d\n",sizeof(1.3));
    // by default every . value is considered as double
    printf("size of 1.3f : %d\n",sizeof(1.3f));
    printf("size of num1 + ch : %d\n",sizeof(num1+ch));
    // int + char
    return 0;
}