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
 return a.exec();

}
