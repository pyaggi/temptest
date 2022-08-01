#ifndef LIBA_H
#define LIBA_H

#ifdef WIN32
#if defined(liba_EXPORTS)
#  define LIBA_PUBLIC __declspec(dllexport)
#else
#  define LIBA_PUBLIC __declspec(dllimport)
#endif

#if defined(libb_EXPORTS)
#  define LIBB_PUBLIC __declspec(dllexport)
#else
#  define LIBB_PUBLIC __declspec(dllimport)
#endif
#else
#  define LIBA_PUBLIC
#  define LIBB_PUBLIC
#endif

template<typename T>
class LibA
{
public:
    LibA()
    {

    }
    static T nextValueFromA()
    {
        static T counter=0;
        return counter++;
    }
    template<typename T1>
    static T1 nextTValueFromA()
    {
        static T1 counter=0;
        return counter++;
    }
private:
    T val;
};
class LIBA_PUBLIC LibA_Long:public LibA<long>
{
public:
    LibA_Long();
};
#endif // LIBA_H
