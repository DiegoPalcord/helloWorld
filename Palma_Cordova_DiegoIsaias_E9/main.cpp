#ifdef _WIN32
#define CLEAR "cls"
#elif defined(unix)||defined(unix)||defined(unix)||defined(_APPLE)||defined(MACH)
#else
#error "SO no soportado para limpiar pantalla"
#endif
#include <iostream>
#include <iomanip>
#include <ios>
#include <stdlib.h>
#include <clocale>

#include "queue.h"
#include "album.h"


/* Act.TDA Cola, implementación dinamica
   Nombre: Diego Isaias Palma Cordova
   Codigo: 221802182
   Seccion: D10
   Fecha: 21/05/2022*/

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("Title ENTREGABLE 9-COLA DE ALBUMS");
    system("Color 09");
    Queue<Album>queueAlbums;
    Album auxAlbum;
    int select;
    do
    {
        cout << "\n" << setw(55) << "BIENVENIDOS A DISC-RECORDS\n" << endl;
        cout << setw(56) <<"(1)-Insertar  álbum en la cola\n" << endl;
        cout << setw(46) <<"(2)-Desencolar álbum\n" << endl;
        cout << setw(55) <<"(3)-Mostrar albums de la cola\n" << endl;
        cout << setw(68) <<"(4)-Mostrar el dato de enfrente de la cola\n" << endl;
        cout << setw(53) <<"(5)-Salir\n\n   Seleccion-->: ";
        cin >> select;
        switch(select)
        {
        case 1:
            system("cls");
            {
                char op;
                string aux1;
                int setAux;
                float price;
                do
                {
                    system("cls");
                    cout << "\n\n" << setw(50) << "REGISTRO DE ALBUMS\n" << endl;
                    cout << "\n" << setw(50) << "Ingrese el nombre del álbum: ";
                    fflush(stdin);
                    getline(cin, aux1);
                    auxAlbum.setNameAlbum(aux1);
                    cout << "\n" << setw(50) << "Ingrese el autor del álbum: ";
                    getline(cin, aux1);
                    auxAlbum.setAuthor(aux1);
                    cout << "\n" << setw(55) << "Ingrese el interprete del álbum: ";
                    getline(cin, aux1);
                    auxAlbum.setInter(aux1);
                    cout << "\n" << setw(48) << "Ingrese el año del álbum: ";
                    cin >> setAux;
                    auxAlbum.setYear(setAux);
                    cout << "\n" << setw(64) << "Ingrese la cantidad disponible del álbum: ";
                    cin >> setAux;
                    auxAlbum.setLot(setAux);
                    cout << "\n" << setw(51) << "Ingrese el precio del álbum: ";
                    cin >> price;
                    auxAlbum.setPrice(price);
                    try
                    {
                        queueAlbums.enqueue(auxAlbum);
                    }
                    catch(Queue<Album>::Exception ex)
                    {
                        cout << "Hubo algun problema..." << endl;
                        cout << ex.what() << endl;
                    }

                    cout << "ALbum insertado exitosamente" << endl << endl;

                    do
                    {
                        cout << "Insertar otro? (S/N): ";
                        cin >> op;
                        cin.ignore();

                        op = toupper(op);
                    }
                    while(op != 'S' and op != 'N');

                }
                while(op == 'S');


                system("cls");
                break;
            }
        case 2:
            system("cls");
            try
            {
                cout << "\n\n" << setw(60) << queueAlbums.dequeue().toString()<< endl;
                cout << "\n\n" << setw(60) << "ÁLBUM DESENCOLADO CON EXITO" << endl;
            }
            catch (Queue<Album>::Exception ex)
            {
                cout << "\n\n" << setw(60) << "Hubo un pedo NO TINE ALBUMS LA COLA" << endl;
                cout << "\n" << setw(58) << ex.what() << endl;
                cout << "\n" << setw(45) <<"No lo hagas de nuevo" << endl;
                system("Pause");
                system("cls");
                break;
            }
            system("Pause");
            system("cls");
            break;
        case 3:
            system("cls");
            cout << queueAlbums.toString() << endl;
            system("Pause");
            system("cls");
            break;
        case 4:
            system("cls");
            try
            {
                cout <<"\n\n" << setw(60)<< "ELEMENTO ENFRENTE DE COLA" << endl;
                cout << "\n\n" << setw(60) << queueAlbums.getFront().toString() << endl;
            }
            catch(Queue<Album>::Exception ex)
            {
                cout << "\n\n" << setw(60) << "Hubo un pedo NO TINE ALBUMS LA COLA" << endl;
                cout << "\n" << setw(59) << ex.what() << endl;
                cout << "\n" << setw(45) <<"No lo hagas de nuevo" << endl;
                system("Pause");
                system("cls");
                break;
            }
            system("Pause");
            system("cls");
            break;
        case 5:
            system("cls");
            cout <<"\n\n" << setw(70) << "Gracias por su visita" << endl;
            system("Pause");
            system("cls");
            break;
        default:
            system("cls");
            cout << "\n\n" << setw(60) << "OPCION NO VALIDA ELIJA UNA SELLECION DEL MENÚ\n\n" << endl;
            system("Pause");
            system("cls");
            break;
        }
    }
    while( select != 5);
    return 0;
}
