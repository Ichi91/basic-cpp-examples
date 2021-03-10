#include <QCoreApplication>

#include "funciones.h"  //incluye las funciones y librerias que se emplean




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//testeando las funciones de los ejercicos de haker rank

vector<int> arr;
vector<int> positiveInt;
int n;
string saludo;
string lit; //para subcadena
string s;
string mm;
int minutos;
bool answer;
vector< vector <int>> queries(3);
char test;


arr = {-4, 3, -9, 0, 4, 1};

    MyFunctions::plusMinus(arr); //esto me permite especificar que utiliza la funcion declarada dentro de MyFunctions en funciones.h


n=3;
    MyFunctions::stairs(n);



//arreglo de cinco enteros positivos


positiveInt = {3,2,1,3};

//cantidad de veces que aparece un numero en la lista
cout << "cantidad de veces que aparece " << count(positiveInt.begin(),positiveInt.end(),3) << endl;

MyFunctions::miniMaxSum(positiveInt);

cout << MyFunctions::birthdayCakeCandles(positiveInt) << endl;


//como hacer una subcadena a partir de una cadena


saludo="hola";   //cadena base
lit=saludo.substr(0,2); //funcion substr se le indica el rango de la posciones dentro de la cadena base y se crea una subcadena

cout << lit << endl;


s = "07:05:45PM";
    cout << s.size() << endl;
    cout << s.length() << endl;

mm = s.substr(3,2);
minutos = stoi(mm);// transforma el string mm a entero
    cout << minutos << endl;

    cout << MyFunctions::timeConversion(s) << endl;

//prueba con el operador XOR

answer=(5^1); //operador XOR da verdadero solo si son diferentes
    cout << answer << endl;

//trabajo con vectores
cout << "VECTORES" << endl;

queries = {{1,0,5},{1,1,7},{1,0,3},{2,1,0},{2,1,1}};

    cout << queries.size() << endl;

//prueba con condicionales tipo switch

test='a';

     switch (test)
     {

         case 'a': {
                   cout<<"case 1"<<endl;
                   cout<<"letra a"<<endl;
                   break; //es importante usarlos si no se quiere tener un efecto cascada
                    }


         case 'b': {
                    cout << "case 2" << endl;
                    cout << "letra b" << endl;
                    break;  //es importante usarlos si no se quiere tener un efecto cascada
                    }

     }



MyFunctions::dynamicArray(2,queries);



    return a.exec();
}
