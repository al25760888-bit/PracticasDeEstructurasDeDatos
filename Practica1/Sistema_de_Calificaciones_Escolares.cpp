#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;

    do {
       
        cout << "\n=== SISTEMA DE CALIFICACIONES ===" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Ver informacion del programa" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

      
        switch (opcion) {
            case 1: {
                string nombre;
                int edad, numCalificaciones;
                float calificacion, sumaCalificaciones = 0.0, promedio;
                
                
                int aprobatorias = 0, reprobatorias = 0;
                float maxCalificacion = -1.0; 
                float minCalificacion = 11.0; 
                
                cout << "\nIngresa el nombre del estudiante: ";
                getline(cin >> ws, nombre); 

                
                cout << "Ingresa la edad: ";
                cin >> edad;
                while (edad < 0 || edad > 120) {
                    cout << "Error: Edad invalida. Debe estar entre 0 y 120." << endl;
                    cout << "Ingresa la edad nuevamente: ";
                    cin >> edad;
                }

               
                cout << "¿Cuantas calificaciones deseas registrar?: ";
                cin >> numCalificaciones;
                while (numCalificaciones <= 0) {
                    cout << "Error: Debes registrar al menos 1 calificacion." << endl;
                    cout << "¿Cuantas calificaciones deseas registrar?: ";
                    cin >> numCalificaciones;
                }

               
                for (int i = 1; i <= numCalificaciones; i++) {
                    
                    
                    cout << "Ingresa la calificacion " << i << " (0-10): ";
                    cin >> calificacion;
                    while (calificacion < 0 || calificacion > 10) {
                        cout << "Error: La calificacion debe estar entre 0 y 10." << endl;
                        cout << "Ingresa la calificacion " << i << " nuevamente (0-10): ";
                        cin >> calificacion;
                    }

                    
                    sumaCalificaciones += calificacion;

                    
                    if (calificacion >= 6) {
                        aprobatorias++;
                    } else {
                        reprobatorias++;
                    }

                    
                    if (calificacion > maxCalificacion) {
                        maxCalificacion = calificacion;
                    }
                    if (calificacion < minCalificacion) {
                        minCalificacion = calificacion;
                    }
                }

                
                promedio = sumaCalificaciones / numCalificaciones;
                
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
                cout << "Calificacion mas alta: " << maxCalificacion << endl;
                cout << "Calificacion mas baja: " << minCalificacion << endl;
                cout << "Calificaciones aprobatorias: " << aprobatorias << endl;
                cout << "Calificaciones reprobatorias: " << reprobatorias << endl;
                
                break;
            }
            case 2:
                cout << "\n--- INFORMACION DEL PROGRAMA ---" << endl;
                cout << "Programa disenado para registrar datos de estudiantes," << endl;
                cout << "calcular promedios y determinar el estado academico." << endl;
                cout << "Version: 1.2 (Con validacion estricta de datos)" << endl;
                break;
                
            case 3:
                cout << "\nSaliendo del programa. Hasta luego!" << endl;
                break;
                
            default:
                cout << "\nError: Opcion invalida. Por favor, elige 1, 2 o 3." << endl;
                break;
        }

    } while (opcion != 3);

    return 0; 
}