#include <stdio.h>

struct Alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

void mostrarDatos(struct Alumno alumno) {
    printf("Matrícula: %d\n", alumno.matricula);
    printf("Nombre: %s\n", alumno.nombre);
    printf("Dirección: %s\n", alumno.direccion);
    printf("Materia: %s\n", alumno.materia);
    printf("Nota: %.2f\n\n", alumno.nota);
}

int main() {
    int numEstudiantes;
    struct Alumno alumno;
    FILE *archivo;

    // Ingresar el número de estudiantes
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &numEstudiantes);

    // Abrir el archivo en modo escritura
    archivo = fopen("datos_alumnos.txt", "w");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Ingresar los datos de cada estudiante y guardarlos en el archivo
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

        // Escribir los datos del estudiante en el archivo
        fprintf(archivo, "Estudiante %d:\n", i + 1);
        fprintf(archivo, "Matrícula: %d\n", alumno.matricula);
        fprintf(archivo, "Nombre: %s\n", alumno.nombre);
        fprintf(archivo, "Dirección: %s\n", alumno.direccion);
        fprintf(archivo, "Materia: %s\n", alumno.materia);
        fprintf(archivo, "Nota: %.2f\n\n", alumno.nota);

        // Mostrar los datos del estudiante en la consola
        printf("\nDatos del estudiante %d:\n", i + 1);
        mostrarDatos(alumno);
    }

    // Cerrar el archivo
    fclose(archivo);

    printf("\nLos datos se han guardado en el archivo datos_alumnos.txt.\n");

    return 0;
}
