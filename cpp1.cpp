#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;
int main()
{
    int a,b,resultado;
    setlocale(LC_ALL, "spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para máquinas Windows
    cout<<"Digitalize dos números: "<<endl;
    cin>>a>>b;
    resultado=a+b;
    cout<<"La suma de los dos numeros es: "<<resultado<<endl;
    return 0;
}