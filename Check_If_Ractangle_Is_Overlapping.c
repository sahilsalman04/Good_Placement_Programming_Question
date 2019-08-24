
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
typedef struct Point
{
    int x;
    int y;
}Point;

int isOverlap(Point l1,Point r1,Point l2, Point r2)
{
    
    if(l1.x > r2.x || l2.x > r1.x)
        return 0;
    
    if(l1.y < r2.y || l2.y < r1.y)
        return 0;
    return 1;
}


int main() {
    Point l1 = {1, 5}, r1 = {4, 3}; 
    Point l2 = {3, 4}, r2 = {6, 1}; 
    
    if(isOverlap(l1,r1,l2,r2)==0)
        printf("Not Overlapping.\n");
    else
        printf("Overlapping.\n");
    return 0;
}

