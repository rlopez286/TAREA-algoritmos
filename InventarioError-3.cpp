#include <iostream>
#include <string>
using namespace std;

// Definición de una estructura para un Producto
struct Producto {
    int codigo;
    string nombre;
    int cantidad;
};

// Definir un tamaño máximo para el inventario
const int MAX_PRODUCTOS = 100;
Producto inventario[MAX_PRODUCTOS];
int totalProductos = 0;

// Función para agregar un producto al inventario
void agregarProducto() {
    if (totalProductos < MAX_PRODUCTOS) {  // Corregido
        Producto nuevoProducto;
        cout << "Ingrese el código del producto: ";
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
        cout << "El inventario está lleno.\n";
    }
}

// Función para mostrar todos los productos del inventario
void mostrarProductos() {
    if (totalProductos == 0) {
        cout << "No hay productos en el inventario.\n";
    } else {
        cout << "Inventario de productos:\n";
        for (int i = 0; i < totalProductos; i++) {  // Corregido
            cout << "Código: " << inventario[i].codigo
                 << " | Nombre: " << inventario[i].nombre
                 << " | Cantidad: " << inventario[i].cantidad << endl;
        }
    }
}

// Función para actualizar la cantidad de un producto
void actualizarProducto() {
    int codigo;
    cout << "Ingrese el código del producto a actualizar: ";
    cin >> codigo;
    
    for (int i = 0; i < totalProductos; i++) {
        if (inventario[i].codigo == codigo) {
            cout << "Ingrese la nueva cantidad: ";
            cin >> inventario[i].cantidad;
            cout << "Cantidad actualizada exitosamente.\n";  // Añadido mensaje de confirmación
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

int main() {
    // Aquí puedes agregar llamadas a las funciones para probar el código
    return 0;
}
