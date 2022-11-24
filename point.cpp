//
// Created by ahadd on 11/24/2022.
//
#include "point.h"
#include <iostream>
using namespace std;

/*void point::initialiser(int a, int b) {
    x=a;
    y=b;
}*/
void point::afficher() {
    cout<<"Point de codonner: ("<<x<<","<<y<<")"<<endl;
}
void point::deplacer(int a, int b) {
    x=x*a;
    y=y*b;
}


point::point(int a, int b) : x(a), y(b) {}
point::point() {
    x=1;
    y=-3;
}


