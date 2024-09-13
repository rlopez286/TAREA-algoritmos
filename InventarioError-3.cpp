#include <iostream>
#include <string>
using namespace std;

// Definici�n de una estructura para un Producto
struct Producto {
    int codigo;
    string nombre;
    int cantidad;
};

// Definir un tama�o m�ximo para el inventario
const int MAX_PRODUCTOS = 100;
Producto inventario[MAX_PRODUCTOS];
int totalProductos = 0;

// Funci�n para agregar un producto al inventario
void agregarProducto() {
    if (totalProductos < MAX_PRODUCTOS) {  // Corregido
        Producto nuevoProducto;
        cout << "Ingrese el c�digo del producto: ";
        cin >> nuevoProducto.codigo;
        cin.ignore();  // Limpiar el buffer antes de leer cadenas
        cout << "Ingrese el nombre del producto: ";
        getline(cin, nuevoProducto.nombre);  // Descomentado
        cout << "Ingrese la cantidad del producto: ";
        cin >> nuevoProducto.cantidad;
        
        inventario[totalProductos] = nuevoProducto;
        totalProductos += 1;  // Descomentado
        
        cout << "Producto agregado exitosamente.\n";
        cout << "Total de productos: " << totalProductos << endl;  // Descomentado
    } else {
        cout << "El inventario est� lleno.\n";
    }
}

// Funci�n para mostrar todos los productos del inventario
void mostrarProductos() {
    if (totalProductos == 0) {
        cout << "No hay productos en el inventario.\n";
    } else {
        cout << "Inventario de productos:\n";
        for (int i = 0; i < totalProductos; i++) {  // Corregido
            cout << "C�digo: " << inventario[i].codigo
                 << " | Nombre: " << inventario[i].nombre
                 << " | Cantidad: " << inventario[i].cantidad << endl;
        }
    }
}

// Funci�n para actualizar la cantidad de un producto
void actualizarProducto() {
    int codigo;
    cout << "Ingrese el c�digo del producto a actualizar: ";
    cin >> codigo;
    
    for (int i = 0; i < totalProductos; i++) {
        if (inventario[i].codigo == codigo) {
            cout << "Ingrese la nueva cantidad: ";
            cin >> inventario[i].cantidad;
            cout << "Cantidad actualizada exitosamente.\n";  // A�adido mensaje de confirmaci�n
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

int main() {
    // Aqu� puedes agregar llamadas a las funciones para probar el c�digo
    return 0;
}
