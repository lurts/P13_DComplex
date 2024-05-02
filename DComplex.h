//Modul:    Programmieren 2 - Praktikum
//Datum:    02.05.24 - 14:51:18
//Name:     Lars Ebbeke
//Aufgabe:  P13_DComplex
//Todo:
//-

#ifndef P13_DCOMPLEX_DCOMPLEX_H
#define P13_DCOMPLEX_DCOMPLEX_H

#endif //P13_DCOMPLEX_DCOMPLEX_H

class DComplex {
private:
    double re;
    double im;

public:

    DComplex(double t_re, double t_im = 0) {
        re = t_re;
        im = t_im;
    }


    double absolute();
    double phaseAngle();
    DComplex conjugate();
    DComplex inverse();
    DComplex add(const DComplex& x);
    DComplex mult(const DComplex& x);
    DComplex negate();

    void print();
    void read();
};