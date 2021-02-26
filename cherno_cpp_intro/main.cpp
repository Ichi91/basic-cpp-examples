#include <QCoreApplication>
#include <array>   /*libreria de arreglos*/
#include <vector>  /*libreria de arreglos dinamicos*/
#include <iostream>
#include <math.h>


using namespace std;

//definiendo clases de ejemplo

class Entity{
public:
    float x,y;

  //consrtuctores
    Entity()
    {x=0;
     y=0;};
    Entity(float &xi, float &yi)
    {x=xi;
     y=yi;
    };

 //metodos
   virtual void movePos(float &xi, float &yi)
    {   x+=xi;
        y+=yi;
        cout<<x<<","<<y<<endl;
    }



};


//nueva clase que hereda de la aneterior

class player : public Entity  //para indicar player hereda los metodos y propiedades de entity
{
public:
    string name;
    //constructores de la clase
    player()
    {name="Unknown";
     Entity();
    };

    player(string &a,float &xi, float &yi)
    {
        Entity(xi, yi);
        name=a;
    };

   //metodos
    void printName()
    {
        cout<< "The name of player is "<<name<<endl;
    }

};



/*funcion que calcula el modulo de la suma
de las diagonales de una matriz cuadrada*/


int diagonalDifference(vector<vector<int>> arr) {

    int diag1=0;
    int j=arr.size();

    for(int i=0;i<arr.size();i++)
    {
        diag1+=arr[i][i];

    };

   int diag2=0;

    for(int i=0;i<arr.size();i++)
    {   j--;
        diag2+=arr[i][j];

    };

int sum=0;

cout<<"suma diag1 "<<diag1<<endl;
cout<<"suma diag2 "<<diag2<<endl;

    return sum;

};




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    cout<<sizeof(int)<<endl; //bytes en memoria que ocupa un intiger

//probando con punteros
    int var=8;
    int *ptr=&var; //asigna a ptr la direccion en memoria de var
                   //declaración del  puntero

    cout<<"valor del puntero "<<ptr<<endl; //es una add en memoria
    cout<<"valor almacenado en la direccion a la que apunta el puntero "<<*ptr<<endl;

    //modifica el contenido de var empleando  el puntero
    *ptr=10;
    cout<<"valor actual de la variable "<<var<<endl;

   // delete [] ptr;

    int array [2]={1,2}; //array sin especificar la posición es un puntero al primer elemento del arreglo
//array[0]=1;
//array[1]=2;

int *ptra  =nullptr;

ptra= array;

/*ptra++;               // ejemplo para acceder al segundo elemento del arreglo
cout<<*ptra<<endl;*/

std::array <int,10> examleArray; //crea un arreglo usando la libreria array
                                 //arreglo de diez elementos de tipo entero



//lo mismo puede hacerse sin modificar el valor dle puntero de la forma
   cout<<"valor del segundo elemento del arreglo "<<*(ptra+1)<<endl;

    cout<<examleArray.size()<<endl;//permite conocer la cantidad de elementos del arreglo

//arreglos dinamico s empleando la libreria vector

std::vector<int> arrayDynamic; //crea un arrglo dinamico de enteros
 arrayDynamic.push_back(5);
 arrayDynamic.push_back(2);
//en este caso se pueden  continuar adicionando elementos sin necesidad de haber predefinido de manera estatica el tamño del arreglo

 //ejemplo para recorer los elementos del arreglo dinamico


 //for (int i=0; i< arrayDynamic.size(); i++ )
//    {cout<<arrayDynamic[i]<<endl;
//    };
//misma forma de simplificar el ciclo anterior
int suma =0;
 for(int v:arrayDynamic)
     {
     suma+=v;
     };
cout<<"la suma es: "<<suma<<endl;
//para eliminar un elemento especifico del arreglo

// arrayDynamic.erase(arrayDynamic.begin()+1);//elimina el segundo elemento del arreglo
// arrayDynamic.clear();     //elimina todo el contenido del arreglo



 //herencia
 player playervoid;
 float posx=20;
 float posy=20;
 string ana= "Ana";
 player playerOne(ana,posx, posy);
 playervoid.printName();
 playerOne.printName();
// playerOne.movePos(posx,posy);


 //arreglos multidimensionales... vector de vectores



 vector<vector<int>> stuff;



 for (int i=0; i<3; i++)
 {
     vector<int>temp;
     for(int j=0;j<3;j++)
     {
         temp.push_back(i+j);
     };
     stuff.push_back(temp);
 };


cout<<"size del arreglo "<<stuff.size()<<endl;

//display all elements

/*
for(int i =0;i<stuff.size();i++)
{

    for(int j=0;j<stuff[i].size();j++)
    {
        cout<<stuff[i][j]<<" ";

    }
    cout<<endl;
};
*/
/*
int diag1=0;

for(int i=0;i<stuff.size();i++)
{
    diag1+=stuff[i][i];
     cout<<stuff[i][i]<<endl;
}

cout<<"suma de la  diagonal 1 "<<diag1<<endl;

int diag2=0;
int j=stuff.size();

for(int i=0;i<stuff.size();i++)
{   j--;
    diag2+=stuff[i][j];
    cout<<stuff[i][j]<<endl;
}


cout<<"suma de la  diagonal 2 "<<diag2<<endl;
*/
stuff[0][0]=11;
stuff[0][1]=2;
stuff[0][2]=4;
stuff[1][0]=4;
stuff[1][1]=5;
stuff[1][2]=6;
stuff[2][0]=10;
stuff[2][1]=8;
stuff[2][2]=-12;



for(int i =0;i<stuff.size();i++)
{

    for(int j=0;j<stuff[i].size();j++)
    {
        cout<<stuff[i][j]<<" ";

    }
    cout<<endl;
};

diagonalDifference(stuff);
cout<<"suma de las  diagonales "<<diagonalDifference(stuff)<<endl;


 return a.exec();
}
