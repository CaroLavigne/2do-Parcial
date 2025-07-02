#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.1416;

// Superclase
class Figura {
protected:
    string nombre;
public:
    virtual void leerDatos() = 0;
    virtual float calcularVolumen() = 0;
    virtual void imprimir() = 0;
    virtual ~Figura() {}
};


// Subclase Cubo
class Cubo : public Figura {
private:
    float arista;
public:
    void leerDatos() override {
        cout << "Introduce la arista del cubo: ";
        cin >> arista;
    }
    float calcularVolumen() override {
        return pow(arista, 3);
    }
    void imprimir() override {
        cout << "Figura: " << nombre << "\nVolumen: " << calcularVolumen() << endl;
    }
};

// Subclase Cilindro
class Cilindro : public Figura {
private:
    float radio, altura;
public:
    void leerDatos() override {
        cout << "Nombre de la figura: ";
        cin >> nombre;
        cout << "Introduce el radio del cilindro: ";
        cin >> radio;
        cout << "Introduce la altura del cilindro: ";
        cin >> altura;
    }
    float calcularVolumen() override {
        return PI * pow(radio, 2) * altura;
    }
    void imprimir() override {
        cout << "Figura: " << nombre << "\nVolumen: " << calcularVolumen() << endl;
    }
};

// Subclase Cono
class Cono : public Figura {
private:
    float radio, altura;
public:
    void leerDatos() override {
        cout << "Nombre de la figura: ";
        cin >> nombre;
        cout << "Introduce el radio del cono: ";
        cin >> radio;
        cout << "Introduce la altura del cono: ";
        cin >> altura;
    }
    float calcularVolumen() override {
        return (PI * pow(radio, 2) * altura) / 3;
    }
    void imprimir() override {
        cout << "Figura: " << nombre << "\nVolumen: " << calcularVolumen() << endl;
    }
};

// Subclase Esfera
class Esfera : public Figura {
private:
    float radio;
public:
    void leerDatos() override {
        cout << "Nombre de la figura: ";
        cin >> nombre;
        cout << "Introduce el radio de la esfera: ";
        cin >> radio;
    }
    float calcularVolumen() override {
        return (4.0 / 3.0) * PI * pow(radio, 3);
    }
    void imprimir() override {
        cout << "Figura: " << nombre << "\nVolumen: " << calcularVolumen() << endl;
    }
};

// Clase Controlador
class Controlador {
public:
    void ejecutar() {
        int opcion;
        Figura* figura = nullptr;

        do {
            mostrarMenu();
            cin >> opcion;

            switch (opcion) {
                case 1: figura = new Cubo(); break;
                case 2: figura = new Cilindro(); break;
                case 3: figura = new Cono(); break;
                case 4: figura = new Esfera(); break;
                case 5: 
                    cout << "Programa finalizado." << endl;
                    break;
                default:
                    cout << "Opción no válida." << endl;
            }

            if (figura != nullptr) {
                figura->leerDatos();
                figura->imprimir();
                delete figura;
                figura = nullptr;
            }

        } while (opcion != 5);
    }

private:
    void mostrarMenu() {
        cout << "\n=== VOLUMEN FIGURAS GEOMETRICAS ===" << endl;
        cout << "1. CUBO\n2. CILINDRO\n3. CONO\n4. ESFERA\n" << endl;
        cout << "ESCOGER OPCION: ";
    }
};

// Función principal
int main() {
    Controlador app;
    app.ejecutar();
    return 0;
} 