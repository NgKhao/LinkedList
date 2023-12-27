#ifndef BOOKSOFLIBRARY_H
#define BOOKSOFLIBRARY_H

#include"InforBook.h"

class BooksOfLibrary
{
      public:
            BooksOfLibrary();
            virtual ~BooksOfLibrary();

            void insertTail(InforBook*);
            void input1Book();
            void numBookOfAuthor(string );
            void booksOfOneYearAndOnePublisher(int, string);
            void output();

      protected:

      private:
            InforBook* head;
            InforBook* tail;
};

#endif // BOOKSOFLIBRARY_H
