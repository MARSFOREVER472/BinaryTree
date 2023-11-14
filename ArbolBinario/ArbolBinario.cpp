/*
C++ Árboles Binarios de búsqueda - Recorridos por amplitud
*
* Copyright 2023 Marcelo Andrés Lam Biaggini
*
* Descripción: Recorridos por Orden, pre-Orden y post-Orden.
*
*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int number; // ASIGNA A UN NÚMERO DENTRO DE UN NODO.
    struct nodo *izq, *der; // UN ELEMENTO DENTRO DE ESTE NODO PUEDE APUNTARSE HACIA UN LADO CUALQUIERA (IZQUIERDO O DERECHO).
};

typedef struct nodo* ABB;

/* ES UN PUNTERO DE TIPO NODO QUE HEMOS LLAMADO "ABB", QUE UTILIZAREMOS
   PARA MAYOR FACILIDAD DE CREACION DE VARIABLES.*/

ABB crearNodo(int x)
{
    ABB nuevoNodo = new(struct nodo); // SE CREA UN ÁRBOL BINARIO MEDIANTE NODOS.
    nuevoNodo->number = x; // EL NUEVO NODO ASOCIA A UN NUEVO ELEMENTO.
    nuevoNodo->izq = NULL; // EL NODO IZQUIERDO DEBE ESTAR VACÍO, APUNTANDO A UN "NULL".
    nuevoNodo->der = NULL; // LO MISMO QUE EL DEL NODO IZQUIERDO, QUE APUNTE A UN "NULL".

    return nuevoNodo;
}

int main()
{
    // EN INSTANTES...
}
