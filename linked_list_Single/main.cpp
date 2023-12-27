#include <iostream>
#include "LINKEDLIST.h"

using namespace std;

int main()
{
      LINKEDLIST *list = new LINKEDLIST();
      ELEMENT *e;
      e = new ELEMENT(9);
      list->InsertFirst(e);
      e = new ELEMENT(10);
      list->InsertTail(e);
      e = new ELEMENT(8);
      list->InsertTail(e);
      list->Travel();

//      cout << endl;
//      list->DeleteFirst();
//      list->Travel();

      cout << endl;
      list->InsertElementAfterNodep(new ELEMENT(10), 11);
      list->InsertElementAfterNodep(new ELEMENT(8), 13);
      list->Travel();

      cout << endl;
      list->DeleteNodep(new ELEMENT(13));
      list->Travel();

//      cout << endl;
//      list->DeleteTail();
//      list->Travel();
      return 0;
}
