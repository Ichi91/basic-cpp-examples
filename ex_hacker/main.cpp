#include <QCoreApplication>

#include <array>   /*libreria de arreglos*/
#include <vector>  /*libreria de arreglos dinamicos*/
#include <iostream>
#include <math.h>

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


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

 vector<int> arr;
 arr = {-4, 3, -9, 0, 4, 1};

    plusMinus(arr);
int n=3;
    stairs(n);


    return a.exec();
}
