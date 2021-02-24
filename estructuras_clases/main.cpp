#include <iostream>
#include <QCoreApplication>

using namespace std;

//ejemplo de estructura
struct direccion
{
string calle;
int numero;
int cp;
//constructor para asignar valores por defecto
direccion()
{calle="Avenida"; numero=6;cp=11401;}

//funiones de una estuctura
void getadd ()
{
cout<<"la direccion completa es "<< calle <<" "<< numero<<" "<<cp<<endl;
}

};



//ejemplo de namespace

namespace ciudad{
                    int zona;
}
namespace pueblo{
                    int zona=11500;
}

using namespace ciudad;


//punteros

int *puntero;




//clases


class cuentas
{

public: //modificables tanto funciones como propiedades
    int sumaDos(int arg);
    int sumaTres(int arg);

private: //son propiedades que no se pueden cambiar
    int resultado;

protected: /*intermedio entre opublico y privado.. las clases heredadas
    pueden acceder a las mismas*/

};

//funciones de la clase
int cuentas::sumaDos(int arg)
{
resultado= arg+2;
return resultado;
};

int cuentas::sumaTres(int arg)
{
resultado= arg+3;
return resultado;
};





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


//estructura con valores por defecto

    direccion jerez;

    cout<<"direccion jerez "<< jerez.calle <<" "<< jerez.numero<<" "<<jerez.cp<<endl;

//modificaciones de los valores de la estructura

    direccion puerto;
    puerto.calle="orellana";
    puerto.cp=11500;
    puerto.numero=2;

// cout<<"direccion puerto "<< puerto.calle <<" "<< puerto.numero<<" "<<puerto.cp<<endl;


//usando la funcion
    puerto.getadd();

   cout<<"ejemplo con namespace"<<endl;
//uso de namespace

  zona=11402; //reconoce la variablr pq estou usando el namespace ciudad
  cout<< zona<<endl;
//para acceder a la zona de pueblo sin usar el namespace

cout<<pueblo::zona<<endl;

cout<<"ejemplo punteros"<<endl;

//punteros

puntero=&zona;// puntero apunta a la direccion en memoria de la variable zona
//en ese caso se refiere a zona ciudad pq estamos usando el namespace ciudad


cout<< "la direccion en  memoria del puntero es "<<puntero<<endl;
cout<<"el valor de la variable a la que apunta el puntero es "<<*puntero<<endl;


//punteros array
cout<<"ejemplo punteros y arrays"<<endl;
//los elementos de un  array se guardan en direcciones consecutivas en memoria


int array[5];
int *p;


p=array; //p=&array[0] primer elemento del array

for(int i=0; i<5;i++)
{

    array[i]=i;

}

//para acceder a la segunda posición del array

cout<<"direccion "<<p++<<endl;
cout<<"contenido "<<*p<<endl;


//punteros y estructuras


direccion vivienda;
direccion *puntero;

puntero=&vivienda;

//para que apunte a la variable calle dentro de la estrucrua;
cout<<"contenido de calle dentro de vivienda "<<puntero->calle<<endl;
cout<<"direccion en memoria de vivienda "<<puntero<<endl;


//definicion de tipos

//resulta util para asignar nombres a los tipos de datos que resulten mas
//comodos
typedef unsigned int uint ;


//definicion de un entero sin signo usando la definición anterior

uint x =10;


//clases ejemplo

cout<< "ejemplo con clases "<<endl;

cuentas cuenta;

cout<< "con argumento 5 funcion sumaDos "<<cuenta.sumaDos(5)<<endl;

cout<< "con argumento 5 funcion sumaTres "<<cuenta.sumaTres(5)<<endl;


 return a.exec();

}
