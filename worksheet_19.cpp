//
//  worksheet_19.cpp
//  c_w
//
//  Created by 이범수 on 9/12/24.
//

#include <stdio.h>
int main(){
    
    int n, sum1 = 0, sum2 = 0;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++){
        
        if (i % 2 == 0)
            sum1 += i;
        else
            sum2 += i;
    }
    printf("1부터 %d까지의 짝수의 합 : %d\n", n, sum1);
    printf("1부터 %d까지의 홀수의 합 : %d\n", n, sum2);
}
