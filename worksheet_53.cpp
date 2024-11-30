//
//  worksheet_53.cpp
//  C_ Project
//
//  Created by 이범수 on 11/7/24.
//

#include <stdio.h>

struct student{
    char dept[20];
    int year;
    int id;
    char name[20];
    char phone[20];
};

void printInfo(student s) {
    printf("학과: ");
    printf("%s\n", s.dept);
    printf("학년: ");
    printf("%d\n", s.year);
    printf("학번: ");
    printf("%d\n", s.id);
    printf("이름: ");
    printf("%s\n", s.name);
    printf("전화번호: ");
    printf("%s\n", s.phone);
};

int main()
{
    
    student s[3];
    for (int i = 0; i < 3; i++) {
        printf("학과: ");
        scanf("%s", s[i].dept);
        printf("학년: ");
        scanf("%d", &s[i].year);
        printf("학번: ");
        scanf("%d", &s[i].id);
        printf("이름: ");
        scanf("%s", s[i].name);
        printf("전화번호: ");
        scanf("%s", s[i].phone);
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        printInfo(s[i]);
    }
}
