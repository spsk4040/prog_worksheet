//
//  worksheet_44.cpp
//  C_ Project
//
//  Created by 이범수 on 10/24/24.
//

#include <stdio.h>
double plus(double a, double b)
{
    return a + b;
    
}
double minus(double a, double b)
{
    return a - b;
    
}
double multiply(double a, double b)
{
    return a * b;
    
}
double divide(double a, double b)
{
    return a / b;
    
}
int main(){
    double n1, n2;
    printf("두 숫자를 입력하세요: ");
    scanf("%lf %lf", &n1, &n2);
    
    printf("%lf\n", plus(n1,n2));
    printf("%lf\n", minus(n1,n2));
    printf("%lf\n", multiply(n1,n2));
    printf("%lf\n", divide(n1,n2));
}
