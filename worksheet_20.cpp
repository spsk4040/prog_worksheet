//
//  worksheet_20.cpp
//  c_w
//
//  Created by 이범수 on 9/12/24.
//

#include <stdio.h>
int main(){
    
    int n1, n2, n3, sum = 0;
    
    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    for (int i = n1; i <= n2; i++){
        if(i % n3 == 0){
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("%d부터 %d까지 %d의배수의 합은 %d입니다.\n", n1, n2, n3, sum);
    
}
