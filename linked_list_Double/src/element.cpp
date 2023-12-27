#include "element.h"

element::element()
{
    //ctor
    this->data=0;
    this->next = nullptr;
    this->prev = nullptr;
}
element::element(int data)
{
    //ctor
    this->data=data;
    this->next=nullptr;
    this->prev = nullptr;
}

element::~element()
{
    //dtor
}
