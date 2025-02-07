#include <stdio.h>

#define ROWS 4
#define COLS 3
  
int main() {
    float matrix[ROWS][COLS] = {
        {1.5, -8.8, 10.0},
        {-3.2, 7.1, -11.3},
        {4.0, -8.4, 12.6},
        {5.5, 9.9, -13.7}
    };
    
    float sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            float f = matrix[i][j];  // Corrected access to matrix elements
            if (f >= 0) {
                sum += f;
            }
        }
    }

    printf("\n== SOMMA VALORI POSITIVI ==\n\n");
    printf("Somma: %f", sum);
    printf("\n\n");

    return 0;
}

