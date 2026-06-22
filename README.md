#include <stdio.h>
#include <math.h>

float dist(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    float x[4], y[4];

  
    for (int i = 0; i < 4; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

    
    float l1 = dist(x[0], y[0], x[1], y[1]);
    float l2 = dist(x[1], y[1], x[2], y[2]);
    float l3 = dist(x[2], y[2], x[3], y[3]);
    float l4 = dist(x[3], y[3], x[0], y[0]);

    
    float d1 = dist(x[0], y[0], x[2], y[2]);
    float d2 = dist(x[1], y[1], x[3], y[3]);

    
    printf("Lados: %.2f %.2f %.2f %.2f\n", l1, l2, l3, l4);

    
    if (l1 == l2 && l2 == l3 && l3 == l4 && d1 == d2)
        printf("Quadrado\n");
    else
        printf("Nao eh quadrado\n");

    return 0;
}
