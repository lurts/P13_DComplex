//Modul:    Programmieren 2 - Praktikum
//Datum:    02.05.24 - 14:51:18
//Name:     Lars Ebbeke
//Aufgabe:  P13_DComplex
//Todo:
//-

#include "DComplex.h"
#include <cmath>

double DComplex::absolute() {
    return sqrt(re*re + im*im);
}

double DComplex::phaseAngle() {
    return atan2(im, re);
}

DComplex DComplex::conjugate() {
    //Z = re - j * im

}

DComplex DComplex::inverse() {
    // 1      re              im
    // - = --------- - j * ---------
    // Z   re² + im²       re² + im²


}

DComplex DComplex::add(const DComplex &x) {
    //Z1+Z2 = (re1 + re2) + j * (im1 + im2)

}

DComplex DComplex::mult(const DComplex &x) {
    //Z1*Z2 = (re1*re2 - im1*im2) + j * (re1*im2 + im1*re2)

}

DComplex DComplex::negate() {
    //-Z = -re - j * im

}

void DComplex::print() {

}

void DComplex::read() {

}