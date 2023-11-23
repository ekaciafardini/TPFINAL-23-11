#include "archivos.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

archivos::archivos()
{

}
void LlenarListaClases(std::ifstream& archi,int counter,sClase* ListaClases)
{

    for (int i = 0; i < counter; i++) {

        archi >> ListaClases[i].id >> ListaClases[i].tipo >> ListaClases[i].hora;
    }

}
void LlenarListaClientes(std::ifstream& archi, int counter, sCliente* ListaClientes)
{ 
    for (int i = 0; i < counter; i++) {

        archi >> ListaClientes[i].ID >> ListaClientes[i].nombre >> ListaClientes[i].apellido >> ListaClientes[i].email
             >> ListaClientes[i].telefono >> ListaClientes[i].fechaNac >> ListaClientes[i].pago;
    }
}
void EscribirArchivoBinario(const sAsistencias* ListaAsistencias, int numElementos, std::ofstream& archi) {

    // Escribe el array en el archivo binario
    archi.write(reinterpret_cast<const char*>(ListaAsistencias), sizeof(sAsistencias) * numElementos);

}
