#include<stdio.h>
int add(int fnum, int snum );
int main(){
    int firstNumber, secondNumber;
    int resultinsidemain;
    printf("enter the first and second number:");
    scanf("%d %d", &firstNumber, &secondNumber);
    resultinsidemain = add(firstNumber , secondNumber);
    printf("the sum inside main function is: %d\n", resultinsidemain);
}
    int add(int fnum, int snum){

        
        int resultInsideAdd= fnum + snum;
        
    printf("the sum inside add function is:%d\n", resultInsideAdd);
    return resultInsideAdd;
    }
