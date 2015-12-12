#include <iostream>.
#include "Conta.h"
using namespace std;

int main() {

    Conta c1(4, 30.00);
    Conta c2;
    c2.setNum(34);
    c1.setNum(7);
    c1.setSaldo(43.44);

    cout << c1.getNum() << endl;
    cout << c1.getSaldo() << endl;
    cout << c2.getNum() << endl;
    return 0;
}
