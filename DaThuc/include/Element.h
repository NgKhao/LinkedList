#ifndef ELEMENT_H
#define ELEMENT_H


class NodeDaThuc
{
    private:
        int heSo;
        int soMu;
        NodeDaThuc *next;

    public:
        NodeDaThuc();
        NodeDaThuc(int, int);
        virtual ~NodeDaThuc();

        int GetHeSo() { return heSo; }
        void SetHeSo(int val) { heSo = val; }
        int GetSoMu() { return soMu; }
        void SetSoMu(int val) { soMu = val; }
        NodeDaThuc* GetNext() { return next; }
        void SetNext(NodeDaThuc *val) { next = val; }
    protected:

};

#endif // ELEMENT_H
