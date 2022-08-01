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
class TestClass_template
{
public:
    TestClass_template()
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
class LIBA_PUBLIC TestClass_long:public TestClass_template<long>
{
public:
    TestClass_long();
    static short test_incCounter_short();
};


class LIBA_PUBLIC TestClass
{
public:
    TestClass()
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
