#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double area;


    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // ­pºâ­±¿n
    area = fabs((x1-x2) * (y1-y2));

    printf("%.2f", area);

    return 0;
}
