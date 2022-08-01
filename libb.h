#ifndef LIBB_H
#define LIBB_H
#include <liba.h>

class LIBB_PUBLIC LibB:public LibA<int>
{
public:
    LibB();
    static int nextValueFromB();
    static  inline int nextValueFromBInline()
    {
        return nextValueFromA();
    }
};
class LIBB_PUBLIC LibB_Long:public LibA_Long
{
public:
    static int nextValueFromB();
    static inline int nextValueFromBInline()
    {
        return nextValueFromA();
    }
};

#endif // LIBB_H
