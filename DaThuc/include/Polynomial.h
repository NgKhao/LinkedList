#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "Element.h"


class Polynomial
{
      public:
            Polynomial();
            virtual ~Polynomial();

            NodeDaThuc* Gethead() { return head; }
            void Sethead(NodeDaThuc *val) { head = val; }
            NodeDaThuc* Gettail() { return tail; }
            void Settail(NodeDaThuc *val) { tail = val; }
            void InsertFirst(NodeDaThuc*);
            void InsertTail(NodeDaThuc*);
            void Input();
            void PrintPoly();
            void RutGon();
            int Tinhfx(int x);
            Polynomial operator+ (Polynomial);
            Polynomial operator* (Polynomial);
      protected:

      private:
            NodeDaThuc *head;
            NodeDaThuc *tail;
};

#endif // POLYNOMIAL_H
