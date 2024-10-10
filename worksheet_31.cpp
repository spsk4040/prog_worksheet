//
//  worksheet_31.cpp
//  c_w
//
//  Created by 이범수 on 10/10/24.
//

#include <stdio.h>
int main(){
    
    int arr[10];
    int n;
    int sum1 = 0, sum2 = 0;
    
    for (int i = 0; i > 10; i++) {
        printf("정수 10개를 입력하세요 (%d번째) : ", i);
        scanf("%d", &n);
        
        if (i % 2 == 0) {
            if(arr[i] % 2 == 0){
                sum1 += arr[i];
            }
        }else {
            if(arr[i] % 2 == 1){
                sum2 += arr[i];
            }
        }
    }
}
