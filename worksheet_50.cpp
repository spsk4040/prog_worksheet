//
//  worksheet_50.cpp
//  C_ Project
//
//  Created by 이범수 on 11/20/24.
//

#include <stdio.h>
struct point {
    int x;
    int y;
};

struct rectangle {
    struct point top_left;  // 사각형의 왼쪽 위 점
    struct point bottom_right;  // 사각형의 오른쪽 아래 점
};
