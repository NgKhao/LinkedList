#include "BooksOfLibrary.h"
#include<iostream>
#include<string>
using namespace std;
BooksOfLibrary::BooksOfLibrary()
{
      this->head = nullptr;
      this->tail = nullptr;
}

BooksOfLibrary::~BooksOfLibrary()
{
      //dtor
}

void BooksOfLibrary::insertTail(InforBook* val)
{
      if(this->head == nullptr)
      {
            this->head = this->tail = val;
      }
      else
      {
            this->tail->setNext(val);
            this->tail = val;
      }
}

void BooksOfLibrary::input1Book()
{
      string name;
      cout << "\nNhap ten cua quyen sach: " ; getline(cin, name);
      string authors;
      cout << "\nNhap ten cac tac gia cua quyen sach (toi da 5 ten): "; getline(cin, authors);
      string nameOfPublisher;
      cout << "\nNhap ten nha xuat ban cua quyen sach: "; getline(cin, nameOfPublisher);
      int yearOfPublication;
      cout << "\nNhap nam xuat ban cua quyen sach: "; cin >> yearOfPublication;
      cin.ignore();
      InforBook* b = new InforBook(name, authors, nameOfPublisher, yearOfPublication);
      insertTail(b);
}

void BooksOfLibrary::numBookOfAuthor(string nameOfPublisher)
{
      int cnt = 0;
      InforBook *p = this->head;
      while(p != nullptr)
      {
            if(p->getAuthors().find(nameOfPublisher) != string::npos)
            {
                  cnt++;
            }
            p = p->getNext();
      }
      cout <<"So luong sach cua tac gia " <<nameOfPublisher<< " la: " << cnt << endl;
}

void BooksOfLibrary::booksOfOneYearAndOnePublisher(int yearOfPublication, string nameOfPublisher)
{
    cout << "\nTen cac quyen sach can tim: \n";
      InforBook *p = this->head;
      while(p != nullptr)
      {
            if(p->getYearOfPublication() == yearOfPublication && p->getNameOfPublisher() == nameOfPublisher)
            {
                  cout << p->getName() << endl;
            }
            p = p->getNext();
      }
}

void BooksOfLibrary::output()
{

      InforBook *p  = this->head;
      while(p != nullptr)
      {
            cout << "\n========================================================";
            cout << "\nTen sach: " << p->getName();
            cout << "\nTen cac tac gia: " << p->getAuthors();
            cout << "\nTen Nha Xuat Ban: " << p->getNameOfPublisher();
            cout << "\nNam xuat ban: " << p->getYearOfPublication();
            cout << "\n========================================================\n\n";
            p = p->getNext();
      }

}

