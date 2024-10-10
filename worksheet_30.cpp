//
//  worksheet_30.cpp
//  c_w
//
//  Created by 이범수 on 10/10/24.
//

#include <stdio.h>

int main() {
    int numbers[10];
    int max1, max2;

    max1 = 0;
    max2 = 0;

    for (int i = 0; i < 10; i++) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &numbers[i]);

        if (numbers[i] > max1) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2) {
            max2 = numbers[i];
        }
    }

    printf("가장 큰 값: %d\n", max1);
    printf("두 번째로 큰 값: %d\n", max2);
}
