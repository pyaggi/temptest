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
class LibA_template
{
public:
    LibA_template()
    {

    }
    template<typename T1>
    static T1 incCounter()
    {
        static T1 counter=0;
        return counter++;
    }
private:
    T val;
};
class LIBA_PUBLIC LibA_long:public LibA_template<long>
{
public:
    LibA_long();
    static short test_incCounter_short();
};


class LIBA_PUBLIC LibA
{
public:
    LibA()
    {

    }
    template<typename T1>
    static T1 incCounter()
    {
        static T1 counter=0;
        return counter++;
    }
    static short test_incCounter_short();
private:
    long val;
};


#endif // LIBA_H
