//
//  worksheet_29.cpp
//  c_w
//
//  Created by 이범수 on 10/7/24.
//

#include <stdio.h>
int main(){
    
    int arr[100];
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 0; i < 10; i++){
        printf("정수 10개를 입력하세요 (%d번째) : ", i);
        scanf("%d", &arr[i]);
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    printf("가장 큰 값 : %d\n", max);
    printf("가장 작은 값 : %d\n", min);
    
}
