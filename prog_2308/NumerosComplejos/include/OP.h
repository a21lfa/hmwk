#ifndef OP_H
#define OP_H


class OP
{
    public:
        complejo x;
        complejo y;
        complejo res;
        OP();
        OP(complejo a, complejo b);
        void suma();
        void resta();
        void escalado(int n);
        void multiplicacion();
        void igualdad();
};

#endif // OP_H
