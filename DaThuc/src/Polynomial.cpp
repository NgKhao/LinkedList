#include "Polynomial.h"
#include<iostream>
#include<math.h>

using namespace std;

Polynomial::Polynomial()
{
      this->head = nullptr;
      this->tail = nullptr;
}

Polynomial::~Polynomial()
{
      //dtor
}
void Polynomial::InsertFirst(NodeDaThuc *val)
{

      if(this->head == nullptr)
      {
            this->head = this->tail = val;
      }
      else
      {
            val->SetNext(this->head);
            this->head = val;
      }
}
void Polynomial::InsertTail(NodeDaThuc *val)
{
      if(this->head == nullptr)
      {
            this->tail = this->head = val;
      }
      else
      {
            this->tail->SetNext(val);
            this->tail = val;
      }
}

void Polynomial::Input()
{
      int bac;
      cout << "\nNhap bac cua da thuc: "; cin >> bac;
      NodeDaThuc *Donthuc;
      while(bac--)
      {
            int HeSo;
            cout << "\n\tNhap he so bac " << bac+1 << ":" ; cin >> HeSo;
            if(HeSo == 0) continue;
            Donthuc = new NodeDaThuc(HeSo, bac +1);
            InsertTail(Donthuc);
      }
      int HeSoTuDo;
      cout << "\n\tNhap he so tu do: "; cin >> HeSoTuDo;
      if(HeSoTuDo != 0)
      {
            Donthuc = new NodeDaThuc(HeSoTuDo, 0);
            InsertTail(Donthuc);
      }
}

void Polynomial::PrintPoly()
{
	NodeDaThuc* p = this->head;
	while (p->GetNext() != NULL) {
		if (p->GetHeSo() != 0) {
			cout << p->GetHeSo() << "x^" << p->GetSoMu() << ((p->GetNext()->GetHeSo() > 0) ? "+" : "");
		}
		p = p->GetNext();
	}
	cout << p->GetHeSo() << "x^" << p->GetSoMu() << endl;
}

int gcd(int a, int b)
{
      if(b == 0) return a;
      return gcd(b, a%b);
}
void Polynomial::RutGon()
{
      int UCLN = this->head->GetHeSo();
      NodeDaThuc *p = this->head->GetNext();
      while(p != nullptr)
      {
            UCLN = gcd(UCLN, p->GetHeSo());
            p = p->GetNext();
      }
      NodeDaThuc *k = this->head;
      while(k != nullptr)
      {
            k->SetHeSo( k->GetHeSo() / UCLN);
            k = k->GetNext();
      }
}

int Polynomial::Tinhfx(int x)
{
      int fx = 0;
      NodeDaThuc *p = this->head;
      while(p != nullptr)
      {
            fx += p->GetHeSo() * pow(x, p->GetSoMu());
            p = p->GetNext();
      }
      return fx;
}

// nctt +
Polynomial Polynomial::operator+ (Polynomial d)
{
      Polynomial *kq = new Polynomial();
      if(this->head == nullptr ) return d;
      else if(d.head == nullptr ) return *this;
      NodeDaThuc *p = this->head;
      NodeDaThuc *k = d.head;
        while(p !=nullptr || k != nullptr){ // phu dinh p == null && k== null =>  dung demorgan
            NodeDaThuc *res = new NodeDaThuc();
            if(p->GetSoMu()==k->GetSoMu()){
                res->SetHeSo(p->GetHeSo()+k->GetHeSo());
                res->SetSoMu(p->GetSoMu());
                p = p->GetNext();
                k = k->GetNext();
            } else if(p->GetSoMu()>k->GetSoMu() || k==nullptr) {
                res->SetHeSo(p->GetHeSo());
                res->SetSoMu(p->GetSoMu());
                p = p->GetNext();
            } else {
                res->SetHeSo(k->GetHeSo());
                res->SetSoMu(k->GetSoMu());
                k = k->GetNext();
            }
            kq->InsertTail(res);
        }
        return  *kq;
}

//nctt *
Polynomial Polynomial::operator* (Polynomial d)
{
      Polynomial kq;
      NodeDaThuc *p = this->head;

      while(p != nullptr )
      {
            Polynomial *tmp = new Polynomial();
            NodeDaThuc *k = d.head;
            while(k != nullptr)
            {
                  NodeDaThuc *res = new NodeDaThuc();
                  res->SetHeSo(p->GetHeSo() * k->GetHeSo());
                  res->SetSoMu(p->GetSoMu() + k->GetSoMu());
                  tmp->InsertTail(res);
                  k = k->GetNext();
            }
//            kq = kq + *tmp;
//            p = p->GetNext();
      }
      return kq;
}
//Polynomial Polynomial::operator*(Polynomial d) {
//    Polynomial kq;
//    NodeDaThuc *p = this->head;
//
//    while (p != nullptr) {
//        Polynomial tmp;
//        NodeDaThuc *k = d.head;
//        while (k != nullptr) {
//            NodeDaThuc *res = new NodeDaThuc();
//            res->SetHeSo(p->GetHeSo() * k->GetHeSo());
//            res->SetSoMu(p->GetSoMu() + k->GetSoMu());
//            tmp.InsertTail(res);
//            k = k->GetNext();
//        }
//        kq = kq + tmp;
//        p = p->GetNext();
//    }
//    return kq;
//}
