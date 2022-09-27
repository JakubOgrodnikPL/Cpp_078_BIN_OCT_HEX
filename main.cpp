#include <iostream>
using namespace std;

string dec2p(int liczba, int podstawa)
{
    string wynik = "";
    int reszta;
    if(liczba==0) wynik="0";
    while (liczba>0)
    {
        reszta=liczba%podstawa;
        if (reszta<10) wynik=char(reszta+48)+wynik;
        else wynik=char(reszta+48+7)+wynik;
        liczba=liczba/podstawa;
    }
    return wynik;
}

int main()
{
    int liczbaDec;
    cout<<"Podaj liczbe w systemie decymalnym do przeksztalcenia: "; cin>>liczbaDec;
    cout<<"W systemie binarnym ta liczba to: "<<dec2p(liczbaDec, 2)<<endl;
    cout<<"W systemie osemkowym ta liczba to: "<<dec2p(liczbaDec, 8)<<endl;
    cout<<"W systemie szesnastkowym ta liczba to: "<<dec2p(liczbaDec, 16)<<endl;
    return 0;
}
