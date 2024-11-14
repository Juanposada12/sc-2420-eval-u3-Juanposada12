#include <iostream>
#include "arma.h"

int main() {
    // Crear un objeto de tipo Arma
    Arma espada("Espada Larga", 50, 1.5f);

    // Mostrar la información del arma
    espada.mostrar_info();

    // El destructor se llama automáticamente cuando el objeto sale del alcance
    return 0;
}
//Clase Arma: Define la estructura de un arma con atributos nombre, daño, y alcance. Tiene un constructor para inicializar estos atributos y un destructor que imprime un mensaje cuando el objeto es destruido. El método mostrar_info imprime la información del arma.
//Archivo main.cpp: Crea un objeto de tipo Arma y llama al método mostrar_info para imprimir los detalles del arma.
//Este resumen en código refleja los principales puntos de la implementación de la clase Arma y su utilización.