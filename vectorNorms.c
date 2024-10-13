#include <stdio.h>
#include <math.h>

double max(double array[], int length) {
    double max = array[0];
    for (int i = 1; i < length; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

double norm1(double vector[], int length) {
    double norm = 0;
    for (int i = 0; i < length; i++) {
        norm += fabs(vector[i]);
    }
    return norm;
}

double norm2(double vector[], int length) {
    double norm = 0;
    for (int i = 0; i < length; i++) {
        norm += vector[i] * vector[i];
    }
    return sqrt(norm);
}

double normP(double vector[], int length, float p) {
    double norm = 0;
    for (int i = 0; i < length; i++) {
        norm += pow(fabs(vector[i]), p);
    }
    return pow(norm, 1.0 / p);
}

double normInf(double vector[], int length) {
    double absVector[length];
    for (int i = 0; i < length; i++) {
        absVector[i] = fabs(vector[i]);
    }
    return max(absVector, length);
}

int main() {
    printf("TEST - Module for Vector Norms\n");
    double v1[] = {1, 1, 1};
    double v2[] = {sqrt(3), sqrt(4), sqrt(3)};
    printf("%lf\n", norm1(v1, 3));
    printf("%lf\n", norm2(v1, 3));
    printf("%lf\n", normInf(v1, 3));
    return 0;
}