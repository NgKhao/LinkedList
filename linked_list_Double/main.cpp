#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
    linkedlist *list_=new linkedlist();
    element *e;
    e=new element(9);
    list_->InsertTail(e);
    e=new element(10);
    list_->InsertTail(e);
    e=new element(8);
      list_->InsertTail(e);
    list_->Travel();
//    list_->DeleteTail();
      list_->InsertElementAfterNodep(new element(8), 11);
    cout<<"\n";
     list_->Travel();
    cout<<"\n";
    list_->DeleteNodep(new element(10));
     list_->Travel();
     delete list_;
     delete e;
    return 0;
}
