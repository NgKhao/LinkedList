#include <iostream>
#include "BooksOfLibrary.h"

using namespace std;


int main()
{
    BooksOfLibrary *l = new BooksOfLibrary();
    int choice;
    while(1)
    {
        system("cls");
        cout << "\n\n\t\t========= Menu =========";
        cout << "\n\t1. Them thong tin sach";
        cout << "\n\t2. Xuat thong tin sach";
        cout << "\n\t3. Tim so luong sach cua 1 tac gia";
        cout << "\n\t4. Tim sach theo nam va nha xuat ban phat hanh";
        cout << "\n\t0. Thoat";
        cout << "\n\n\t\t========= End ==========";
        cout << "\nNhap lua chon: "; cin >> choice; cin.ignore();
        if(choice < 0 || choice > 4)
        {
            cout << "\nLua chon khong hop le. Xin kiem tra lai !";
            system("pause");
        }
        else if(choice == 1)
        {
            cout << "\nThem thong tin sach: ";
            cout << "\n===========================================";
            l->input1Book();
        }
        else if(choice == 2)
        {
            cout << "\nThong tin cac sach trong thu vien: ";
            l->output();
            system("pause");
        }
        else if(choice == 3)
        {
            string author; cin.ignore();
            cout << "Nhap ten tac gia cua sach muon xem: "; getline(cin, author);
            l->numBookOfAuthor(author);
            system("pause");
        }
        else if(choice == 4)
        {
            int year;
            cout << "\nNhap nam xuat ban: "; cin >> year;
            string name;
            cin.ignore();
            cout << "\nNhap nha xuat ban: "; getline (cin,name);
            l->booksOfOneYearAndOnePublisher(year, name);
            system("pause");
        }
        else
        {
            break;
        }
    }
    return 0;
}
