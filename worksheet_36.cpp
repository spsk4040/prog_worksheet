//
//  worksheet_036.cpp
//  C_ Project
//
//  Created by 이범수 on 11/8/24.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    char temp[100];

    // 문자열 입력
    printf("입력: ");
    scanf("%s", str1);
    printf("입력: ");
    scanf("%s", str2);
    printf("입력: ");
    scanf("%s", str3);

    // 문자열 정렬 (사전 순)
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    // 결과 출력
    printf("사전 순 정렬 결과:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
}
