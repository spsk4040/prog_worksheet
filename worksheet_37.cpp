//
//  worksheet_37.cpp
//  C_ Project
//
//  Created by 이범수 on 11/8/24.
//

#include <stdio.h>
#include <string.h>

int main() {
    char s[10], t[10];

    printf("문자열 s 입력: ");
    scanf("%s", s);
    printf("문자열 t 입력: ");
    scanf("%s", t);

    strncat(s, t, sizeof(s) - strlen(s) - 1);
    
    printf("연결 결과: %s\n", s);
}
