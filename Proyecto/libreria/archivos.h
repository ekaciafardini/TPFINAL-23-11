#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include "structs.h"

typedef enum codArchivos{ErrorApertura=-1, ErrorEscritura=0, ExitoOperacion=1} eCodArchivos;

class archivos
{
public:
    archivos();
};

void LlenarListaClases(std::ifstream& archi,int counter,sClase* ListaClases);
void LlenarListaClientes(std::ifstream& archi, int counter, sCliente* ListaClientes);
void EscribirArchivoBinario(const sAsistencias* ListaAsistencias, int numElementos, std::ofstream& archi);

#endif // ARCHIVOS_H
