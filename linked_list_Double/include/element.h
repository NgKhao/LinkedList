#ifndef ELEMENT_H
#define ELEMENT_H


class element
{
    private:
        int data;
        element *next;
        element *prev;

    public:
        element();
        element(int);
        virtual ~element();

        int Getdata() { return data; }
        void Setdata(int val) { data = val; }
        element * GetNext() { return next; }
        void SetNext(element* val) { next = val; }
        element * GetPrev() { return prev; }
        void SetPrev(element* val) { prev = val; }

    protected:

};

#endif // ELEMENT_H
