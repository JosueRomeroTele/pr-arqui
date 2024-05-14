
#include <stdio.h>
#include <stdlib.h>

float* method_max_min(float *list) {
    float *result = (float*)malloc(2 * sizeof(float));
    int size = sizeof(list) / sizeof(list[0]);

    result[0] = list[0]; // Mínimo
    result[1] = list[0];

    for (int i = 1; i < size; i++) {
        if (list[i] > result[1]) {
            result[1] = list[i]; // Nuevo máximo
        }
        if (list[i] < result[0]) {
            result[0] = list[i]; // Nuevo mínimo
        }
    }

    return  result;
}
