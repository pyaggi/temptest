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
    static unsigned short nextTValueFromB();
    template<typename T>
    static inline T nextTValueFromBInline()
    {
        return nextTValueFromA<T>();
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
    static unsigned short nextTValueFromB();
    template<typename T>
    static T nextTValueFromBInline()
    {
        return nextTValueFromA<T>();
    }
};

#endif // LIBB_H
