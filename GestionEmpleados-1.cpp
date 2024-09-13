#include <iostream>
#include <string>
using namespace std;

// Definici�n de una estructura para un Empleado
struct Empleado {
    int id;
    string nombre;
    float salario;
};

// Definir el tama�o m�ximo para la lista de empleados
const int MAX_EMPLEADOS = 50;
Empleado empleados[MAX_EMPLEADOS];
int totalEmpleados = 0;

// Funci�n para agregar un empleado
void agregarEmpleado() {
    if (totalEmpleados < MAX_EMPLEADOS) {
        Empleado nuevoEmpleado;
        cout << "Ingrese el ID del empleado: ";
        cin >> nuevoEmpleado.id;
        
        cout << "Ingrese el nombre del empleado: ";
        cin >> nuevoEmpleado.nombre;  
        cout << "Ingrese el salario del empleado: ";
        cin >> nuevoEmpleado.salario;
        
        empleados[totalEmpleados] = nuevoEmpleado;
        totalEmpleados++;  
        
        cout << "Empleado agregado exitosamente.\n";
    } else {
        cout << "No se puede agregar m�s empleados.\n";
    }
}

// Funci�n para mostrar todos los empleados
void mostrarEmpleados() {
    if (totalEmpleados == 0) {
        cout << "No hay empleados registrados.\n";
    } else {
        cout << "Lista de empleados:\n";
        for (int i = 0; i < totalEmpleados; i++) {  // Corregido el bucle
            cout << "ID: " << empleados[i].id
                 << " | Nombre: " << empleados[i].nombre
                 << " | Salario: " << empleados[i].salario << endl;
        }
    }
}

// Funci�n para actualizar el salario de un empleado
void actualizarSalario() {
    int id;
    cout << "Ingrese el ID del empleado: ";
    cin >> id;
    
    for (int i = 0; i < totalEmpleados; i++) {
        if (empleados[i].id == id) {
            cout << "Ingrese el nuevo salario: ";
            cin >> empleados[i].salario;
            cout << "Salario actualizado exitosamente.\n";  // A�adido mensaje de confirmaci�n
            return;
        }
    }
    cout << "Empleado no encontrado.\n";
}

// Funci�n para eliminar un empleado
void eliminarEmpleado() {
    int id;
    cout << "Ingrese el ID del empleado a eliminar: ";
    cin >> id;
    
    for (int i = 0; i < totalEmpleados; i++) {
        if (empleados[i].id == id) {
            for (int j = i; j < totalEmpleados - 1; j++) {
                empleados[j] = empleados[j + 1];
            }
            totalEmpleados--;
            cout << "Empleado eliminado exitosamente.\n";
            return;
        }
    }
    cout << "Empleado no encontrado.\n";
}

int main() {
    // Aqu� puedes agregar llamadas a las funciones para probar el c�digo
    return 0;
}
