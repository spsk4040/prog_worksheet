//
//  worksheet_18.cpp
//  c_w
//
//  Created by 이범수 on 9/12/24.
//

#include <stdio.h>
int main(){
    
    int n, sum = 0;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}
