#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fun.h"


int main(int argc, char *argv[])
{
    int sn = 2 ,menu;
    int cantidad[8] = {500,200,100,300,300,0,0,0};
    int ID[8] = {101,102,103,104,105,106,107,108};
    float precio[8]= {0.20,0.25,0.95,0.30,0.18,0,0,0};
    char nombre[8][80] = {"Pan popular","Pan especial","Leche","Cafe","Huevos","Nada","Nada","Nada"};
    char descripcion[8][80]={"pan sencillo","pan variado","Entera","Pequeño","De corral",".","Nada","Nada"};
    int i, valor = 10;
    int barras;
do
{
    printf("                      Bienvenido al  Menu                  \n");
    printf("1= Ver Productos\n2=Ingreso Producto\n3=Modificacion del Producto\n4=Eliminacion del Prodcuto\n");
    printf("Seleccione una opcion\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        Menuproductos(ID,nombre,cantidad,precio,descripcion,valor,i);
        break;
    case 2:
        valor=IngresarNuevoProducto(nombre,descripcion,cantidad,precio,valor,i);
        break;
    case 3:
        ModificarProduc(ID,cantidad,precio,barras,i);

        break;
    case 4:
        Eliminar(ID,nombre,cantidad,precio,barras,i);
        break;
    default:
        break;
    }
    printf("Desea volver al menu incial\nsi = 2 // no = 1 \n");
    scanf("%d",&sn);
} while (sn!=1);

printf("Cerro el inventario de panaderia Dannys \n");
}