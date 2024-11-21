#include <stdio.h>
int main() {
    int nota;
    // Pedir que ingrese la nota del alumno
    printf("Ingrese la nota del alumno (entre 1 y 10): ");
    scanf("%d", &nota);
    
    // Verificar que la nota esté dentro del rango válido
    if (nota < 1 || nota > 10) {
        printf("Nota inválida. Por favor, ingrese una nota entre 1 y 10.\n");
    } else {
        // Mostrar el mensaje correspondiente según la nota ingresada
        if (nota == 10) {
            printf("El alumno obtuvo un sobresaliente.\n");
        } else if (nota == 8 || nota == 9) {
            printf("El alumno obtuvo un distinguido.\n");
        } else if (nota == 6 || nota == 7) {
            printf("El alumno obtuvo un bueno.\n");
        } else if (nota == 4 || nota == 5) {
            printf("El alumno obtuvo un aprobado.\n");
        } else {
            printf("El alumno obtuvo un reprobado.\n");
        }
    }
    
    return 0;
}




