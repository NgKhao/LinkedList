#ifndef INFORBOOK_H
#define INFORBOOK_H
#include<iostream>
using namespace std;

class InforBook
{
      public:
            InforBook();
            InforBook(string, string, string, int );
            virtual ~InforBook();
            string getName(){ return m_name;}
            void setName(string name) {m_name = name;}
            string getAuthors(){ return m_authors;}
            void setAuthors( string authors) {m_authors = authors;}
            string getNameOfPublisher() {return m_nameOfPublisher;}
            void setNameOfPublisher(string nameOfPublisher) {m_nameOfPublisher = nameOfPublisher;}
            int getYearOfPublication() {return m_yearOfPublication;}
            void setYearOfPublication(int yearOfPublication) {m_yearOfPublication = yearOfPublication;}
            InforBook* getNext() {return next;}
            void setNext(InforBook* val) {next = val;}

      protected:

      private:
            string m_name;
            string m_authors;
            string m_nameOfPublisher;
            int m_yearOfPublication;
            InforBook* next;

};

#endif // INFORBOOK_H
