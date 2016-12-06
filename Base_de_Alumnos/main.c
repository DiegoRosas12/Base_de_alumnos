//
//  main.c
//  Base_de_Alumnos
//
//  Created by Diego Eduardo Rosas González on 29/11/16.
//  Copyright © 2016 Diego Eduardo Rosas González. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int n;
typedef struct {
    char calle[40];
    char colonia[40];
    int num;
    int cp;
    char ciudad[50];
}direccion;

typedef struct {
    int sistemas;
    int calculo;
    int quimica;
    int mecanica;
    int introduccion;
    int algebra;
}cal;

typedef struct {
    char nombre[40];
    int nua;
    direccion domicilio;
    int promedio;
    cal calificaciones;
}kardex;

kardex alumnos[100];
kardex *palumno, a1;

int main() {
    int opc,i=0;
    
    palumno = &a1;
    printf("Proporcione el numero de estudiantes\n");
    scanf("%i",&n);
    palumno = (kardex *)malloc(n*sizeof(kardex));
    
    
    for(i=0;i<n;i++){
        //system("cls");
        printf("Ingresando datos del Alumno[%i]\n", i+1);
        printf("Nombre del Alumno[%i]\n", i+1);
        getchar();
        gets(palumno[i].nombre);
        
        printf("NUA:");
        scanf("%d", &palumno[i].nua);
        
        printf("Ingresando datos de domicilio\n");
        printf("Calle:\n");
        getchar();
        gets(palumno[i].domicilio.calle);
        printf("Numero de casa\n:");
        scanf("%d", &palumno[i].domicilio.num);
        
        printf("Fund\n:");
        scanf("%d", &palumno[i].calificaciones.sistemas);
        
        
    }
    
    printf("Bienveido: elija una opcion\n1)Buscar alumno\n2)Ingresar alumno\n3)Eliminar alumno\n");
    scanf("%i",&opc);
    switch (opc) {
        case 1:
            //system(clc);
            printf("Buscar Alumno\n");
            
            break;
        case 2:
            printf("Ingresa Alumno\n");
            i + 1;
            printf("Alumno:");
            printf("Nombre:");
            scanf("%s",palumno[i].nombre);
            printf("");
            printf("%s",palumno->nombre);
            
            break;
        case 3:
            printf("Elimina Alumno\n");
            char eliminar[40];
            printf("Introducir el nombre del alumno que desea eliminar\n");
            
            
            break;
        default:
            printf("Error");
            break;
    }
    free(palumno);
}


