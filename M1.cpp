#include <iostream>
#include <string>

using namespace std;

// Microservicio 1
class Microservicio1 {
public:
  Microservicio1() {
    cout << "Microservicio 1 iniciado" << endl;
  }

  void obtener_datos(string& datos) {
    datos = "Datos del microservicio 1";
  }
};

// Microservicio 2
class Microservicio2 {
public:
  Microservicio2() {
    cout << "Microservicio 2 iniciado" << endl;
  }

  void procesar_datos(string& datos) {
    cout << "Procesando datos del microservicio 1: " << datos << endl;
  }
};

int main() {
  // Inicializar los microservicios
  Microservicio1 microservicio1;
  Microservicio2 microservicio2;

  // Obtener datos del microservicio 1
  string datos;
  microservicio1.obtener_datos(datos);

  // Procesar datos del microservicio 1
  microservicio2.procesar_datos(datos);

  return 0;
}