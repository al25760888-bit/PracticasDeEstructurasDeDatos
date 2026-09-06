
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nombre;
    int edad;
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    
    cout << "Ingresa el nombre del estudiante: ";
    getline(cin >> ws, nombre); 

    cout << "Ingresa la edad: ";
    cin >> edad;

   
    if (edad < 0 || edad > 120) {
        cout << "Error: Edad invalida." << endl;
        return 1; 
    }


    cout << "Ingresa la primera calificacion (0-10): ";
    cin >> calificacion1;
    cout << "Ingresa la segunda calificacion (0-10): ";
    cin >> calificacion2;
    cout << "Ingresa la tercera calificacion (0-10): ";
    cin >> calificacion3;

   
    if (calificacion1 < 0 || calificacion1 > 10 ||
        calificacion2 < 0 || calificacion2 > 10 ||
        calificacion3 < 0 || calificacion3 > 10) {
        cout << "Error: Las calificaciones deben estar entre 0 y 10." << endl;
        return 1;
    }

   
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0;

   
    string estado;
    if (promedio >= 9) {
        estado = "EXCELENTE";
    } else if (promedio >= 7) {
        estado = "APROBADO";
    } else if (promedio >= 6) {
        estado = "REGULAR (aprobado con lo minimo)";
    } else {
        estado = "REPROBADO";
    }

  
    cout << "\n--- RESUMEN DEL ESTUDIANTE ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " anos" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;

    return 0; 
}