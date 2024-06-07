//
// Created by Student on 07.06.2024.
//

#ifndef UNTITLED23_WEKTOR_H
#define UNTITLED23_WEKTOR_H
#include <string>
class Wektor{
private:
    std::string m_name;
    double a;
    double b;

public:
Wektor();
Wektor(const std::string& name, double x = 0, double y = 0);
~Wektor();
void showWektor() const:
double lenght();
const Wektor& iloczynWektorowy(const Wektor& p) const);
const Wektor& iloczynSkalarny(const Wektor& p) const);

};
#endif //UNTITLED23_WEKTOR_H
