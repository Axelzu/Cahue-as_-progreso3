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

    // aqui para poder verificar si el archivo se abrio correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    // se puede mostrar aqui el ingreso de de cada estudieante y guardarlos de forma horizontal
    for (int i = 0; i < numEstudiantes; i++) {
        printf("\nIngrese los datos del estudiante %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alumno.matricula);

        printf("Nombre: ");
        scanf("%s", alumno.nombre);

        printf("Dirección: ");
        scanf("%s", alumno.direccion);

        printf("Materia: ");
        scanf("%s", alumno.materia);

        printf("Nota: ");
        scanf("%f", &alumno.nota);

        // aqui escribira todos los datos y los pasara en un archivo y los mostrara de forma horizontal
        fprintf(archivo, "Estudiante %d:\n", i + 1);
        fprintf(archivo, "Matrícula: %d\t", alumno.matricula);
        fprintf(archivo, "Nombre: %s\t", alumno.nombre);
        fprintf(archivo, "Dirección: %s\t", alumno.direccion);
        fprintf(archivo, "Materia: %s\t", alumno.materia);
        fprintf(archivo, "Nota: %.2f\n\n", alumno.nota);
    }

    
    return 0;
}