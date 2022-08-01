#ifndef LIBA_H
#define LIBA_H


template<typename T>
class LibA
{
public:
    LibA()
    {

    }
    static int nextValueFromA()
    {
        static int m_counter=0;
        return m_counter++;
    }
private:
    T val;
};

#endif // LIBA_H
