//
//  worksheet_60.cpp
//  C_ Project
//
//  Created by 이범수 on 11/7/24.
//

#include <stdio.h>

int main()
{
    int x; // 4: 0000 0100      00000001 1 << 2 -> 0000 0100
    
    scanf("%d", &x);
    if ((x & (1 << 2)) == 0) {
        printf("%d의 3번째 비트는 0입니다.", x);
    }else if ((x & (1 << 2)) == 4) {
        printf("%d의 3번째 비트는 1입니다.", x);
    }
    printf("\n");
    
}
// 0100
// 0100
