//
//  worksheet_54.cpp
//  C_ Project
//
//  Created by 이범수 on 11/7/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct point{
    int x, y;
};

double distance(point p1, point p2);

int main()
{
    point p[100];
    
    srand(time(0));
    
    for (int i = 0; i < 100; i++) {
        p[i].x = rand() % 1000;
        p[i].y = rand() % 1000;
    }
    for (int i = 0; i < 100; i++) {
        printf("p[%d] = (%d, %d)\n", i, p[i].x, p[i].y);
    }
    
    double min = distance(p[0], p[1]);
    int min1 = 0, min2 = 1;
    double dist;
    
    for (int i = 0; i < 100 ; i++) {
            for (int j = i + 1; j < 100; j++) {
                dist = distance(p[i], p[j]);
                if (dist < min) {
                    min = dist;
                    min1 = i;
                    min2 = j;
                }
            }
        }

    printf("가장 까까운 점의 쌍 : p[%d]-p[%d]\n", min1, min2);
    
}

double distance(point p1, point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

