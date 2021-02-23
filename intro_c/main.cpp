#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <stdlib.h> //libreria del sistema system("PAUSE")

using namespace std;

int num = 30;
int num2;
bool comparador;
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


    return a.exec();
}
