#include <stdio.h>

struct Alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

int main() {
    int numEstudiantes;
    struct Alumno alumno;
    FILE *archivo;

    // se ingresan el número de cualquier estudiantes
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &numEstudiantes);

    // sirve para poder abrir el archivo y se guarden los datos
    archivo = fopen("datos_alumnos.txt", "w");

    

    return 0;
}