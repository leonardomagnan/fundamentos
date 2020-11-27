#pragma once

#include "iostream"
#include <string>
#include "fstream"

using namespace std;

class Archivos{ 
private: 
	ofstream Fout;
	string nombreCliente;
	string correo;
	string telefono;
	string factura;
	string ubicacion;
	string recomendacion;
	string NIT;

public:
	Archivos(void);
	void setArchivo(string Ncliente, string email, string celular,
	string recibo, string direccion,string sugerencia, string NITX);
};
