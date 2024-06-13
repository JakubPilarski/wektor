#include <iostream>
#include "wektor.h"
using namespace std;
void menu(){
    cout<<"1.Poczatek w punkcie (0,0)"<<endl;
    cout<<"2.Punty poczatkowe"<<endl;
    cout<<"2.Zatrzymaj Program"<<endl;
}
void display( Wektor w1, Wektor w2){
    w1.showWektor();
    w2.showWektor();
    cout<<w1.lenght()<<endl;
    cout<<w2.lenght()<<endl;
    cout<<w1.iloczynSkalarny(w2)<<endl;
    const Wektor x1 = w1.suma(w2);
    const Wektor x2 = w1.roznica(w2);
    x1.showWektor();
    x2.showWektor();
    cout<<"kat miedzy wektorami = "<< w1.kat(w2)<<endl;
}
int main() {
    int chocie;
    double x,y,z,d,f,g,h,j;
    char nazwa1[10]= "";
    char nazwa2[10]= "";
    while(1){
    menu();
    cout<<"wybur"<<endl;
    cin>> chocie;
    if(chocie == 1){
        cout<<endl;
        cout<< "nazwa pierwszego wektora"<<endl;
        cin>> nazwa1;
        cout<<"podaj puntk koncowy"<<endl<< "wspolrzedna x =";
        cin>> x;
        cout<< endl<<"wspolrzedna y =  ";
        cin>> y;
        cout<<endl;
        cout<< "nazwa drugiego wektora"<<endl;
        cin>> nazwa2;
        cout<<"podaj puntk koncowy"<<endl<< "wspolrzedna x = ";
        cin>> z;
        cout<< endl<<"wspolrzedna y = ";
        cin>> d;
        cout<<endl;
    Wektor w1(nazwa1,x,y),w2(nazwa2,z,d);
            display(w1,w2);}
    if (chocie == 2){
        double x1,y2,x2,y1;
        cout<<endl;
        cout<< "nazwa pierwszego wektora"<<endl;
        cin>> nazwa1;
        cout<<"podaj puntk początkowy"<<endl<< "wspolrzedna x =";
        cin>> x;
        cout<< endl<<"wspolrzedna y =  ";
        cin>> y;
        cout<<endl;
        cout<<"podaj puntk koncowy"<<endl<< "wspolrzedna x =";
        cin>> f;
        cout<< endl<<"wspolrzedna y =  ";
        cin>> g;
        cout<<endl;
        cout<< "nazwa drugiego wektora"<<endl;
        cin>> nazwa2;
        cout<<"podaj puntk poczatkowy"<<endl<< "wspolrzedna x = ";
        cin>> z;
        cout<< endl<<"wspolrzedna y = ";
        cin>> d;
        cout<<endl;
        cout<<"podaj puntk koncowy"<<endl<< "wspolrzedna x =";
        cin>> h;
        cout<< endl<<"wspolrzedna y =  ";
        cin>> j;
        cout<<endl;
        x1 = f-x;
        y1 = g-y;
        x2 = h-z;
        y2 = j-d;
        Wektor w1(nazwa1,x1,y1),w2(nazwa2,x2,y2);
        display(w1,w2);
    }
    if (chocie == 3) {
        break;
    }
    }
}
