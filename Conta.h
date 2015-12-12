#include <iostream>

#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#endif // CONTA_H_INCLUDED

class Conta {
  int num;
  double saldo;

  public:
    Conta();
    Conta(int num, double saldo);
    void setSaldo(double saldo);
    void setNum(int num);
    int getNum();
    double getSaldo();
};

Conta::Conta(int num, double saldo) {
  this->num = num;
  this->saldo = saldo;
}
Conta::Conta(){
}

void Conta::setNum(int num) {
  this->num = num;
}

int Conta::getNum() {
  return num;
}

void Conta::setSaldo(double saldo) {
  this->saldo = saldo;
}

double Conta::getSaldo() {
  return saldo;
}
