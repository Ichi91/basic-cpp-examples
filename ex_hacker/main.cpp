#include <QCoreApplication>

#include <array>   /*libreria de arreglos*/
#include <vector>  /*libreria de arreglos dinamicos*/
#include <iostream>
#include <math.h>
#include <string>



using namespace std;





void plusMinus(vector<int> arr) {

double pNumber=0;  //positivos
double nNumber=0;  //negativos
double zNumber=0;  //igual cero
double total=arr.size();
cout<<total<<endl;

for (int i=0; i<total;i++)

{
    if (arr[i]>0)
    {
        pNumber++;

    };
    if (arr[i]<0)
    {
        nNumber++;
    };
    if (arr[i]==0)
    {
        zNumber++;
    };

};

//calculo de relacion
double rPositive= pNumber/total;
double rNegative= nNumber/total;
double rZero= zNumber/total;

//muestra en pantalla los reultados positivos, negativos, cero
cout<<rPositive<<endl;
cout<<rNegative<<endl;
cout<<rZero<<endl;

};

void stairs(int &n)
{
    int spaces=n-1;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<spaces;j++)
        {
          cout<<" ";
        }


        for (int w=0; w<n-spaces;w++)
        {cout<<"#";
        }
spaces--;
        cout<<endl;
    }

};



void miniMaxSum(vector<int> &arr) {

    /*Devuelve el menor y mayor valor de las cinco posibles sumas que se pueden realizar en un arreglo de cinco enteros positivos*/

    vector<long> suma={0,0,0,0,0};
    int index=arr.size()-1;
    for (int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
           { if(j!=index)
               { suma[i]+=arr[j];
                 //cout<<arr[j]<<endl;
                }
            }

            index--;
            cout<<suma[i]<<endl;
    }

   // int posMin=0;
   // int posMax=0;
    long menor;
    long mayor;

    menor=suma[1];

    mayor=suma[1];
    for (int i=1;i<=suma.size();i++)
    {
       if (suma[i-1]<menor)
       {menor=suma[i-1];
            cout<<"menor "<<menor<<endl;
           //posMin=i-1;
       }
       if (suma[i-1]>mayor)
       {mayor=suma[i-1];
          // posMax=i-1;
       }
    }



    cout<<menor<<" "<<mayor<<endl;


};

int birthdayCakeCandles(vector<int> &candles) {
    int index=0;
    int heightCandle=candles[1];
    for (int i=1;i<=candles.size();i++)
    {
       if (candles[i-1]>heightCandle)
       {heightCandle=candles[i-1];
        }
    };

    for(int i=0;i<=candles.size();i++)
    {if (candles[i]==heightCandle)
        {index++;}
    }

    return  index;

}


string timeConversion(string &s)
{
/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
 * example timeConversion(string &s) tal que s='12:01:AM'.
    devuelve: '00:01:00' */

string militarTime;

string hh=s.substr(0,2);//el primer argumento es la posicion a partir de la cual se formala subcadena
                        // y el segundo la cantidad de caracteres que abarca


string mm=s.substr(3,2);
string ss=s.substr(6,2);
string format=s.substr(8);

int horas=stoi(hh); //convierte de string a int

if (horas<12 && format=="PM")
    {horas+=12;
    hh=to_string(horas); //convierte de int a string
    //cout<<horas<<endl;
    }
if (horas==12 && format=="AM")
    {hh="00";}
if (horas==12 && format=="PM" && mm=="00"&& ss=="00")
    {hh="24";}

militarTime=hh+":"+mm+":"+ss;
    return militarTime;
}

int hourglassSum(vector<vector<int>> &arr) {

    int piboteRaw=0;
    int piboteCol=0;
    int sumHglass=0;
    int mayorsumHglass=-28;

for(int i=0;i<4;i++)
{
    for (int j=0;j<4;j++)
    {
       sumHglass=arr[piboteRaw][piboteCol]+arr[piboteRaw][piboteCol+1]+arr[piboteRaw][piboteCol+2]+arr[piboteRaw+1][piboteCol+1]+arr[piboteRaw+2][piboteCol]+arr[piboteRaw+2][piboteCol+1]+arr[piboteRaw+2][piboteCol+2];
       piboteCol ++;
       if (mayorsumHglass<sumHglass){mayorsumHglass=sumHglass;}
    }
    piboteCol=0;
    piboteRaw ++;

}



return mayorsumHglass;
}



vector<int> dynamicArray(int n, vector<vector<int>> queries) {

   //vector<int> answerResult(queries.size());
    vector<int> answerResult;
   int type;
   //int idx=0;
   int lastAnswer=0;
   vector <vector <int> > arr(n);

    for (int i=0; i<queries.size();i++)
    {
      int type = queries[i][0];
      int x= queries[i][1];
      int y= queries[i][2];
      int idx=((x^lastAnswer)%n);


         if (type==1)
                            {

                              arr[idx].push_back(y);

                             }


         if (type==2)
                            {
                                int pos=0;
                                pos=y%(arr[idx].size());
                                lastAnswer=arr[idx][pos];
                                cout<<lastAnswer<<endl;
                                answerResult.push_back(lastAnswer);

                             }




    }

    return answerResult;
}









int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

 vector<int> arr;

 arr = {-4, 3, -9, 0, 4, 1};

    plusMinus(arr);
int n=3;
    stairs(n);



//arreglo de cinco enteros positivos

 vector<int> positiveInt;
  positiveInt = {3,2,1,3};


cout<< "cantidad de veces que aparece "<<count(positiveInt.begin(),positiveInt.end(),3)<<endl;

 miniMaxSum(positiveInt);

cout<<birthdayCakeCandles(positiveInt)<<endl;
//como hacer una subcadena a partir de una cadena
string saludo="hola";   //cadena base
string lit=saludo.substr(0,2); //funcion substr se le indica el rango de la posciones dentro de la cadena base y se crea una subcadena
cout<<lit<<endl;


string s="07:05:45PM";
cout<<s.size()<<endl;
cout<<s.length()<<endl;

string mm=s.substr(3,2);
int minutos=stoi(mm);// transforma el string mm a entero
cout<<minutos<<endl;

cout<<timeConversion(s)<<endl;

bool answer;
answer=(5^1); //operador XOR da verdadero solo si son diferentes


cout<<answer<<endl;


cout<<"VECTORES"<<endl;
vector< vector <int>> queries(3);
queries={{1,0,5},{1,1,7},{1,0,3},{2,1,0},{2,1,1}};

 cout<<queries.size()<<endl;

 char test;
 //cin>>test;
 test='a';

 switch (test) {

 case 'a': {cout<<"case 1"<<endl;
           cout<<"case 1"<<endl;
           break;}


 case 'b': {cout<<"case 2"<<endl;
            break;} //es importante usarlos si no se quiere tener un efecto cascada

 }

dynamicArray(2,queries);

int d=2;
vector<int> newArr;


for (int i=d;i<arr.size();i++)
{

    newArr.push_back(arr[i]);

}

    for (int i=0;i<d;i++)
{

    newArr.push_back(arr[i]);

}

    for (int i=0;i<arr.size();i++)
    {

       cout<<newArr[i]<<endl;

    }


 //arr = {-4, 3, -9, 0, 4, 1};
    return a.exec();
}
