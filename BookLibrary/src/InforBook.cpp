#include "InforBook.h"

InforBook::InforBook()
{
      m_name = "";
      m_authors = "";
      m_nameOfPublisher = "";
      m_yearOfPublication = 0;
      this->next = nullptr;
}

InforBook::InforBook(string name, string authors, string nameOfPublisher, int yearOfpubication)
{
      m_name = name;
      m_authors = authors;
      m_nameOfPublisher = nameOfPublisher;
      m_yearOfPublication = yearOfpubication;
      this->next = nullptr;
}

InforBook::~InforBook()
{
      //dtor
}
