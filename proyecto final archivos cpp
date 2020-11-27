#include "StdAfx.h"
#include "Archivos.h"

    
Archivos::Archivos(void)
{
	nombreCliente= " ";
	correo= " ";
	telefono= " ";
	factura= " ";
	ubicacion= " ";
	recomendacion= " ";
	NIT= " ";

}
void Archivos::setArchivo(string Ncliente, string email, string celular,
	string recibo, string direccion,string sugerencia, string NITX){
	nombreCliente= Ncliente;
	correo= email;
	telefono=celular;
	factura= recibo;
	ubicacion= direccion;
	recomendacion= sugerencia;
	NIT= NITX;
	Fout.open("Registro.txt", ios::app);
	if(Fout){
	Fout<<"nombreCliente   "<<Ncliente<<endl;
	Fout<<"correo          "<<email<<endl;
	Fout<<"telefono        "<<celular<<endl;
	Fout<<"factrua         "<<recibo<<endl;
	Fout<<"ubicacion       "<<direccion<<endl;
	Fout<<"recomendacion   "<<sugerencia<<endl;
	Fout<<"NIT             "<<NITX<<endl;
	}
	Fout.close();
}
