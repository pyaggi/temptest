#ifndef LIBB_H
#define LIBB_H
#include <liba.h>

class LibB:public LibA<int>
{
public:
    LibB();
    static int nextValueFromB();
    static  inline int nextValueFromBInline()
    {
        return nextValueFromA();
    }
};

#endif // LIBB_H
