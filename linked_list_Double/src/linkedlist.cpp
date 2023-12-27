#include "linkedlist.h"
#include <iostream>
using namespace std;
linkedlist::linkedlist()
{
    //ctor
    this->head=nullptr;
    this->tail=nullptr;
}

linkedlist::~linkedlist()
{
    //dtor
}
void linkedlist::InsertFirst(element* e){
      if(this->head==nullptr)
        this->head=this->tail=e;
        else{
            e->SetNext(this->head);
            this->head->SetPrev(e);
            this->head=e;
        }

}
void linkedlist::InsertTail(element*e){
     if(this->head==nullptr)
        this->head=this->tail=e;
        else{
            this->tail->SetNext(e);
            e->SetPrev(this->tail);
            this->tail=e;
        }
}

void linkedlist::InsertElementAfterNodep(element *e, int val)
{
      element *p = new element(val);
      if(e->Getdata() == this->head->Getdata() && this->head->GetNext() == nullptr)
      {
            return InsertTail(p);
      }
      if(e->Getdata() == this->tail->Getdata() && this->tail->GetNext() == nullptr)
      {
            return InsertTail(p);
      }
      element *k = this->head;
      while(k != nullptr)
      {
            if(k->Getdata() == e->Getdata())
            {
                  p->SetNext(k->GetNext());
                  k->GetNext()->SetPrev(p);
                  k->SetNext(p);
                  p->SetPrev(k);
            }
            k = k->GetNext();
      }
}
void linkedlist::Travel(){
     element* p=this->head;
     while(p!=nullptr){
        cout<<p->Getdata()<<"\t";
        p=p->GetNext();
     }
}
void linkedlist::DeleteFirst(){
      if(this->head == nullptr) return;
      else
      {
            this->head=this->head->GetNext();
            this->head->SetPrev(nullptr);
      }
}

void linkedlist::DeleteTail()
{
      if(this->head == nullptr) return;
      if(this->head->GetNext() == nullptr) return DeleteFirst();
      this->tail = this->tail->GetPrev();
      this->tail->SetNext(nullptr);
}

void linkedlist::DeleteNodep(element *p)
{
      if(this->head == nullptr)
      {
            return;
      }
      if(this->head->Getdata() == p->Getdata())
      {
            DeleteFirst();
            return;
      }
      if(this->tail->Getdata() == p->Getdata())
      {
            DeleteTail();
            return;
      }
      element *k = this->head;
      while(k != nullptr)
      {
            if(p->Getdata() == k->Getdata())
            {
                  k->GetPrev()->SetNext(k->GetNext());
                  k->GetNext()->SetPrev(k->GetPrev());
                  return;
            }
            k = k->GetNext();
      }
}
