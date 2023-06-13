/**
Calculez le périmètre du polygone suivant
RÉSULTAT : 28.21
Vous devez utiliser des structures
Votre code doit comporter au moins une fonction
qui se charge du calcul
Cette fonction doit pouvoir calculer le périmètre
de n’importe quel polygone convexe
Les points sont en dur dans le code
**/

#include <stdio.h>
#include <math.h>

typedef struct Points Points;
struct Points {
    int x;
    int y;
};

double CalculDistance (Points point1, Points point2) {
    return sqrt(pow((point1.x - point2.x), 2) + pow((point1.y - point2.y), 2));
}

double CalculPolygone (Points *polygone, int size) {
    int i;
    int j;
    double result;
    for (i = 0, j = 1; i < size - 1 && j < size; i++, j++) {
        result += CalculDistance(polygone[i], polygone[j]);
        if (i == 4) {
            result += CalculDistance(polygone[0], polygone[5]);
        }
    }
    return result;
}
int main () {
    struct Points polygone[] = {
            {2,0},
            {6, 0},
            {10, -2},
            {8, -6},
            {2, -8},
            {0, -4}
    };
    int size = sizeof(polygone) / sizeof(Points);
    printf("%f", CalculPolygone(polygone, size));
    return 0;
}