#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void Menuproductos(int ID[8], char nombre[8][50], int cantidad[8], float precio[8], char descripcion[8][50], int valor, int i)
{
    printf("                                  Productos\n");
    printf("ID      |         Nombre        |   Cantidad     |         Precio            Descripcion\n");
    for (i = 0; i < valor; i++)
    {

        printf("%d\t|   %s\t\t|%d           |          %.2f\t\t    |    %s \n", ID[i], nombre[i], cantidad[i], precio[i], descripcion[i]);
    }
}

int IngresarNuevoProducto(char nombre[8][50], char descripcion[8][50], int cantidad[8], float precio[8], int valor, int i)
{
    printf("                     Ingreso de Producto\n");
    printf("Nombre del producto\n");
    scanf(" %c", nombre[valor]);
    printf("Descripcion del producto\n");
    scanf("%s", &descripcion[valor]);
    printf("Ingresa la cantidad\n");
    scanf("%d", &cantidad[valor]);
    printf("Ingrese el precio\n");
    scanf("%f", &precio[valor]);
    valor++;
    return valor;
}

void ModificarProduc(int ID[8], int cantidad[8], float precio[8], int barras, int i)
{
    printf("                        Modificacion del Producto\n");
    printf("Escribe el ID del producto que quieres modificar\n");
    scanf("%d", &barras);
    for (i = 0; i < 8; i++)
    {
        if (ID[i] == barras)
        {
            printf("Ingresa la cantidad\n");
            scanf("%d", &cantidad[i]);
            printf("Ingrese el precio\n");
            scanf("%f", &precio[i]);
        }
    }
}

void Eliminar(int ID[8], char nombre[8][50], int cantidad[8], float precio[8], int barras, int i)
{
    printf("=============================Eliminacion del Producto===========================================\n");
    printf("Escribe el ID  del producto que quieres eliminar\n");
    scanf("%d", &barras);
    for (i = 0; i < 8; i++)
    {
        if (ID[i] == barras)
        {
            ID[i] = 0;
            strcpy(nombre[i], "Vacio");
            cantidad[i] = 0;
            precio[i] = 0;
        }
    }
}