//
//  worksheet_57.cpp
//  C_ Project
//
//  Created by 이범수 on 11/30/24.
//

#include <stdio.h>

int main()
{
    enum week {일요일, 월요일, 화요일, 수요일, 목요일, 금요일, 토요일};
    
    int week;
    printf("요일 선택(일요일 = 0, 월요일 = 1, 화요일 = 2, 수요일 = 3, 목요일 = 4, 금요일 = 5, 토요일 = 6) : ");
    scanf("%d", &week);
    
    switch (week) {
        case 일요일:
            printf("일요일\n");
            break;
        case 월요일:
            printf("월요일\n");
            break;
        case 화요일:
            printf("화요일\n");
            break;
        case 수요일:
            printf("수요일\n");
            break;
        case 목요일:
            printf("목요일\n");
            break;
        case 금요일:
            printf("금요일\n");
            break;
        case 토요일:
            printf("토요일\n");
            break;
        default:
            printf("0~6 사이의 숫자를 입력하세요.\n");
        }
}
