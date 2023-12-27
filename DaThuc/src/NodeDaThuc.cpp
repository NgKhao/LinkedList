#include "Element.h"

NodeDaThuc::NodeDaThuc()
{
    //ctor
    this->heSo=0;
    this->soMu=0;
    this->next=nullptr;
}

NodeDaThuc::NodeDaThuc(int heSo, int soMu)
{
    //ctor
    this->heSo = heSo;
    this->soMu = soMu;
    this->next=nullptr;
}

NodeDaThuc::~NodeDaThuc()
{
    //dtor
}

