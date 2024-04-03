# BinaryTree

Mediante un algoritmo de búsqueda, el procedimiento ha sido el mismo que se acaba de visualizar en el proyecto.

Ejemplo:

```
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

void insertarNodo(ABB& arbol, int x)
{
    if (arbol == NULL) // SI EL ÁRBOL ESTÁ VACÍO, QUE RETORNA A NULL.
    {
        arbol = crearNodo(x); // CREAREMOS UN NUEVO NODO INSERTANDO ELEMENTOS EN "x".
    }

    // EN CASO CONTRARIO, PUEDE COMPARAR VALORES SI ES MAYOR O MENOR QUE EL DEL ELEMENTO INVOLUCRADO DENTRO DE UN NODO.

    else if (x < arbol->number) // SUPONIENDO QUE SI EL NODO PADRE (x) ES MENOR QUE EL DEL NÚMERO POR DEFECTO A INSERTAR.
        insertarNodo(arbol->izq, x); // INSERTA UN NODO HACIA EL LADO IZQUIERDO DEL ÁRBOL.

    else if (x > arbol->number) // SUPONIENDO QUE SI EL NODO PADRE (x) ES MAYOR QUE EL DEL NÚMERO POR DEFECTO A INSERTAR.
        insertarNodo(arbol->der, x); // INSERTA UN NODO HACIA EL LADO DERECHO DEL ÁRBOL.
}

// LO HAREMOS EN RECORRIDO PRE-ORDEN EL ÁRBOL BINARIO (ABB):

void preOrden(ABB arbol)
{
    if (arbol != NULL) // SI EL ÁRBOL NO ESTÁ VACÍO O RETORNA A NULL.
    {
        cout << arbol->number << " "; // ELEMENTO O NODO DENTRO DE ESTE ÁRBOL BINARIO.
        preOrden(arbol->izq); // LADO IZQUIERDO DEL ÁRBOL BINARIO EN RECORRIDO PRE-ORDEN.
        preOrden(arbol->der); // LADO DERECHO DEL ÁRBOL BINARIO EN RECORRIDO PRE-ORDEN.
    }
}

// LO HAREMOS EN RECORRIDO EN-ORDEN EL ÁRBOL BINARIO (ABB):

void enOrden(ABB arbol)
{
    if (arbol != NULL) // SI EL ÁRBOL NO ESTÁ VACÍO O RETORNA A NULL.
    {
        enOrden(arbol->izq); // LADO IZQUIERDO DEL ÁRBOL BINARIO EN RECORRIDO EN-ORDEN.
        cout << arbol->number << " "; // ELEMENTO O NODO DENTRO DE ESTE ÁRBOL BINARIO EN RECORRIDO EN-ORDEN.
        enOrden(arbol->der); // LADO DERECHO DEL ÁRBOL BINARIO EN RECORRIDO EN-ORDEN.
    }
}

// LO HAREMOS EN RECORRIDO POST-ORDEN EL ÁRBOL BINARIO (ABB):

void postOrden(ABB arbol)
{
    if (arbol != NULL) // SI EL ÁRBOL NO ESTÁ VACÍO O RETORNA A NULL.
    {
        postOrden(arbol->izq); // LADO IZQUIERDO DEL ÁRBOL BINARIO EN RECORRIDO POST-ORDEN.
        postOrden(arbol->der); // LADO DERECHO DEL ÁRBOL BINARIO EN RECORRIDO POST-ORDEN.
        cout << arbol->number << " "; // ELEMENTO O NODO DENTRO DE ESTE ÁRBOL BINARIO EN RECORRIDO POST-ORDEN.
    }
}

// MÉTODO PARA VISUALIZAR EL ÁRBOL BINARIO POR NODOS Y ELEMENTOS INSERTADOS, MODIFICADOS O ELIMINADOS.

void viewTree(ABB arbol, int n)
{
    if (arbol == NULL) // SI EL ÁRBOL ESTÁ VACÍO, ENTONCES COMENZAMOS A IMPLEMENTAR EN ELLO.
        return;
    viewTree(arbol->der, n + 1); // INSERTA UN VALOR ADICIONAL EN EL LADO DERECHO DEL NODO PADRE (ÁRBOL BINARIO PRINCIPAL).

    // VAMOS A RECORRER EL ÁRBOL BINARIO DESDE EL NODO PADRE MEDIANTE UN CICLO "for".

    for (int i = 0; i < n; i++)
        cout << "    ";

    cout << arbol->number << endl;

    viewTree(arbol->izq, n + 1); // INSERTA UN VALOR ADICIONAL EN EL LADO IZQUIERDO DEL NODO PADRE (ÁRBOL BINARIO PRINCIPAL).
}

int main()
{
    // MENÚ PRINCIPAL DEL PROYECTO.

    ABB arbol = NULL; // ÁRBOL YA CREADO EN EL PROGRAMA.

    int n; // NÚMERO DE NODOS DENTRO DE UN ÁRBOL BINARIO DE BÚSQUEDA.
    int x; // ELEMENTO A INSERTAR EN CADA NODO DE ESTE ÁRBOL.

    cout << "\n\t\t .. [ ARBOL BINARIO DE BUSQUEDA ] .. \n\n";

    cout << " NUMERO MAXIMO DE NODOS DENTRO DE UN ARBOL: " << endl;
    cin >> n; // INGRESA UN NÚMERO MÁXIMO DE NODOS QUE CONTENDRÁ ESTE ÁRBOL.
    cout << endl;

     // RECORREMOS EL ÁRBOL POR NODOS MEDIANTE UN CICLO "for".

    for (int i = 0; i < n; i++)
    {
        cout << " NUMERO DE NODO " << i + 1 << ": "; // EL NÚMERO DE NODOS VA A INCREMENTAR.
        cin >> x; // LUEGO LO INSERTA AL ÁRBOL.
        insertarNodo(arbol, x); // LLAMADO DE ESTE MÉTODO A INSERTAR UN ELEMENTO DENTRO DEL NODO.
    }

    /* ~~~~~~~~~~SE DESPLIEGAN LOS RESULTADOS DEL ÁRBOL EN CONJUNTO CON LOS NODOS YA INGRESADOS DENTRO DE LA CONSOLA.~~~~~~~~~~ */

    cout << "\n **********MOSTRANDO ARBOL BINARIO (ABB)********** \n\n";
    viewTree(arbol, 0); // LLAMADO DEL MÉTODO QUE VA CONTABILIZANDO DESDE 0.

    cout << "\n *****RECORRIDOS DEL ÁRBOL BINARIO (ABB)*****";

    cout << "\n\n *** EN ORDEN *** :   ";   enOrden(arbol); // EN ORDEN.
    cout << "\n\n ****** PRE-ORDEN ****** :   ";   preOrden(arbol); // EN PRE-ORDEN.
    cout << "\n\n ********* POST-ORDEN ********* :   ";   postOrden(arbol); // EN POST-ORDEN.

    cout << endl << endl;

    system("pause");
    return 0;
}
```
