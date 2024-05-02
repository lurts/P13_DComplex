//Modul:    Programmieren 2 - Praktikum
//Datum:    02.05.24 - 14:51:18
//Name:     Lars Ebbeke
//Aufgabe:  P13_DComplex
//Todo:
//-

#include "DComplex.h"
#include <cmath>
#include <iostream>

class DComplex;

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

    double n_re = re / (re*re + im*im);
    double n_im = im / (re*re + im*im);

    return DComplex(re, im);
}

DComplex DComplex::add(const DComplex &x) {
    //Z1+Z2 = (re1 + re2) + j * (im1 + im2)

    double n_re = re + x.re;
    double n_im = im + x.im;

    return DComplex(n_re, n_im);
}

DComplex DComplex::mult(const DComplex &x) {
    //Z1*Z2 = (re1*re2 - im1*im2) + j * (re1*im2 + im1*re2)

    double n_re = re * x.re - im * x.im;
    double n_im = re * x.re + im * x.im;

    return DComplex(n_re, n_im);
}

DComplex DComplex::negate() {
    //-Z = -re - j * im

    return DComplex(-re, -im);
}

void DComplex::print() {
    if (im >= 0)
        std::cout << re << "+ j" << im << std::endl;
    else
        std::cout << re << "- j" << -im << std::endl;
}

void DComplex::read() {

}