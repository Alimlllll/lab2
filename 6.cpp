Какие из задач можно решить с помощью оператора switch:
· Если остаток от деления Х на 5 равен 2, то присвоить Х значение 0, если остаток равен 3, то умножить Х на –1.
· Если Х равно 5, то присвоить Y квадрат Х, если 7, то У присвоить остаток от деления Х на 2, в остальных случаях значение Y увеличить на 1.
· Если Х больше 5, то увеличить его значение на 1, иначе вывести на печать У. Х и Y целые.
Только 2, потому что в case нужно проверять значение 
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    switch(x){
        case 5: y=x*x; break;
        case 7: y=x%2; break;
        default: y++; break;
    }
    printf("%d %d",x,y);
}
