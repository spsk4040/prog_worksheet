//
//  worksheet_21.cpp
//  c_w
//
//  Created by 이범수 on 9/12/24.
//

#include <stdio.h>
int main(){
    
    int n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++){
        sum1 += i;
        if (i % 2 == 0)
            sum2 += i;
        else
            sum3 += i;
    }
    printf("1부터 n까지 숫자의 합 : %d\n", sum1);
    printf("1부터 n까지 짝수의 합 : %d\n", sum2);
    printf("1부터 n까지 홀수의 합 : %d\n", sum3);
    
}
