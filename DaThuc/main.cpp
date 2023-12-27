#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
      Polynomial *DaThuc1 = new Polynomial();
      Polynomial *DaThuc2 = new Polynomial();

      DaThuc1->Input();
      DaThuc2->Input();

      Polynomial *DaThuc3 = new Polynomial();
      *DaThuc3 = *DaThuc1 * *DaThuc2;
//
//      cout << "\nDa thuc sau khi rut gon: \n";
//      DaThuc1->RutGon();
//
      DaThuc3->PrintPoly();
////      DaThuc2->PrintPoly();
//      cout << endl;
//      cout << DaThuc1->Tinhfx(1);
      return 0;
}
