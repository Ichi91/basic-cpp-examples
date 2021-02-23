#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int num = 30;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("Hola mundo \n \n");
    cout << num  << endl;

    return a.exec();
}
