#include <iostream>
#include "nodo.h"
#include "red.h"
#include <vector>
#include <map>
#include <list>

using namespace std;

void Menu();
void segundoMenu();


int main()
{
    Red *r = new Red;
    int opcionSalir = 0;
    while(opcionSalir == 0){
        int opcionMenu = 0;
        Menu();
        cin >> opcionMenu;
        if(opcionMenu == 1){
            r->generarRedAleatoria();
            r->imprimirRed();
            int opcionSegundoMenu = 0;
            segundoMenu();
            cin >> opcionSegundoMenu;
            if(opcionSegundoMenu == 1){
                Nodo *n = new Nodo;
                string *nombre = new string;
                cout << "Ingrese el nombre del nuevo enrutador: "; cin >> *nombre;
                n->setNombre(*nombre);
                r->ingresar_nodo(*n);
                delete n;
                delete nombre;
                r->imprimirRed();
            }
            else if(opcionSegundoMenu == 2){
                string *nombre = new string;
                cout << "Ingrese el nombre del enrutador que va a eliminar: "; cin >> *nombre;
                r->eliminarNodo(*nombre);
                r->imprimirRed();
                delete nombre;
            }
            else if(opcionSegundoMenu == 3){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->cambiarCostoEnvio(*nombreInicial, *nombreDestino);
                r->imprimirRed();
                delete nombreInicial;
                delete nombreDestino;
            }
            else if(opcionSegundoMenu == 4){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->saberCosto(*nombreInicial, *nombreDestino);
                delete nombreDestino;
                delete nombreInicial;
            }

        }
        else if(opcionMenu == 2){
            r->porDefecto();
            r->imprimirRed();
            int opcionSegundoMenu = 0;
            segundoMenu();
            cin >> opcionSegundoMenu;
            if(opcionSegundoMenu == 1){
                Nodo *n = new Nodo;
                string *nombre = new string;
                cout << "Ingrese el nombre del NUEVO enrutador: "; cin >> *nombre;
                n->setNombre(*nombre);
                r->ingresar_nodo(*n);
                delete n;
                delete nombre;
                r->imprimirRed();
            }
            else if(opcionSegundoMenu == 2){
                string *nombre = new string;
                cout << "Ingrese el nombre del enrutador que va a eliminar: "; cin >> *nombre;
                r->eliminarNodo(*nombre);
                r->imprimirRed();
                delete nombre;
            }
            else if(opcionSegundoMenu == 3){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->cambiarCostoEnvio(*nombreInicial, *nombreDestino);
                r->imprimirRed();
            }
            else if(opcionSegundoMenu == 4){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->saberCosto(*nombreInicial, *nombreDestino);
                delete nombreDestino;
                delete nombreInicial;
            }
        }
        else if(opcionMenu == 3){
            r->redCreadaUsuario();
            r->imprimirRed();
            int opcionSegundoMenu = 0;
            segundoMenu();
            cin >> opcionSegundoMenu;
            if(opcionSegundoMenu == 1){
                Nodo *n = new Nodo;
                string *nombre = new string;
                cout << "Ingrese el nombre del NUEVO enrutador: "; cin >> *nombre;
                n->setNombre(*nombre);
                r->ingresar_nodo(*n);
                delete n;
                delete nombre;
                r->imprimirRed();
            }
            else if(opcionSegundoMenu == 2){
                string *nombre = new string;
                cout << "Ingrese el nombre del enrutador que va a eliminar: "; cin >> *nombre;
                r->eliminarNodo(*nombre);
                r->imprimirRed();
                delete nombre;
            }
            else if(opcionSegundoMenu == 3){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->cambiarCostoEnvio(*nombreInicial, *nombreDestino);
                r->imprimirRed();
            }
            else if(opcionSegundoMenu == 4){
                string *nombreInicial = new string;
                string *nombreDestino = new string;
                cout << "Ingrese el nombre del enrutador inicial: "; cin >> *nombreInicial;
                cout << "Ingrese el nombre del enrutador final: "; cin >> *nombreDestino;
                r->saberCosto(*nombreInicial, *nombreDestino);
                delete nombreDestino;
                delete nombreInicial;
            }
        }
        cout << "Salir: 1"; cin >> opcionSalir;
    }

    delete r;
    return 0;
}

void Menu(){
    cout << "1. Generar una red aleatomarimaente." << endl;
    cout << "2. Red por defecto." << endl;
    cout << "3. Crear una red." << endl;
}

void segundoMenu(){
    cout << "1. Agregar un enrutador. " << endl;
    cout << "2. Eliminar un enrutador. " << endl;
    cout << "3. Cambiar el costo de envio de dos enrutadores. " << endl;
    cout << "4. Saber cuanto cuesta enviar un paquete de un enrutador a otro." << endl;

}

