#include <QCoreApplication>
#include "cabecera.h"

#define suma(a,b) a+b

using namespace std;

int num = 30;
int num2;
bool comparador;

int funcion (int a,int b)
{

    return a%b;
}

struct contacto
{
    int tel;
    int edad;

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("Hola mundo \n \n");
    cout << num  << endl;

    //operadores de asignacion
num*=2;
num2=num;
    cout << num << endl;
num+=5;
    cout << num << endl;
 num-=5;
    cout << num  << endl;

    //operadores de comparación
    comparador= (num==num2); // si es igual
    cout << comparador << endl;

    comparador= (num!=num2); // si es diferente
    cout << comparador << endl;

    //operasdores logicos

int n1, n2, n3, n4;


n1=12;
n2=20;
n3=4;
n4=3;

//AND

comparador=(n1<n4 && n3<n2); //conque se cumplan todas las condiciones
 cout << comparador << endl;

 //OR

 comparador=(n1<n4  || n3<n2); //con que cumpla una de las condiciones
  cout << comparador << endl;

//invirte y asigna el resultado

 comparador=!comparador;
  cout <<"el inverso de laoperacion anterior es "<< comparador << endl;

//uso del define analogo a utilizar una sustitución o una macro

  cout <<"la suma es "<< suma(1,20) << endl;

 //ejemplo de funciones
  cout << "operador modulo el resulatado entre " <<n2<<" y "<<n1<<"\n"<<funcion(n2,n1)<< endl;

  //estructura
contacto ana;
ana.tel=205734;
ana.edad=29;

cout<< "el telefono de ana es "<<ana.tel<<endl;


    return a.exec();

}
