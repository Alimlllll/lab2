4. Какой из фрагментов программы соответствует решению следующей задачи: если Х положительное(не равное нулю) четное целое число, то присвоить Х его квадрат, если не четное, то остаток от деления на три.
#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
if !(x<=0)
if (x%2==0)
x=x*x;
else 
x%=3;
printf("%d",x);
}