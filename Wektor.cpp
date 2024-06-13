#include <iostream>
#include "wektor.h"
#include "math.h"
using namespace std;
Wektor::Wektor() {
    m_name = "wektor";
    a=0;
    b=0;
}
Wektor::Wektor(const std::string &name, double x, double y) {
    m_name=name;
    a=x;
    b=y;
}
Wektor::~Wektor() {}

double Wektor::iloczynSkalarny(const Wektor &p) {
    double s;
    s =a*p.a+b*p.b;
    return s;
}

double Wektor::lenght()const {
    double l;
    l = sqrt(a*a+b*b);
    return l;
}

void Wektor::showWektor() const {
    cout<<"Wektor: "<< m_name<<"["<<a<<","<<b<<"]"<<endl;
}

 const Wektor Wektor:: suma(const Wektor &p) const {

    return  Wektor ("suma_wektorow",a+p.a,b+p.b);
}

 const Wektor Wektor::roznica(const Wektor &p) const {
    return Wektor ("roznica_wektorow",a-p.a,b-p.b);
}

double Wektor::kat(const Wektor &p) {
    double x = iloczynSkalarny(p);
    double y = lenght()* p.lenght();
    double k = (acos(x/y) * 180)/ 3.14;
    return k;
}
