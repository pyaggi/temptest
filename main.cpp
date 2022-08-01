#include <iostream>
#include <libb.h>
int main(int argc, char *argv[])
{
    for  (int c=0;c<2;c++)
    {
        std::cout<<"A<int>::nextValueFromA "<<LibA<int>::nextValueFromA()<<std::endl;
        std::cout<<"B::nextValueFromA "<<LibB::nextValueFromA()<<std::endl;
        std::cout<<"B::nextValueFromB "<<LibB::nextValueFromB()<<std::endl;
        std::cout<<"B::nextValueFromBInline "<<LibB::nextValueFromBInline()<<std::endl;
    }
    for  (int c=0;c<2;c++)
    {
        std::cout<<"A_Long::nextValueFromA "<<LibA_Long::nextValueFromA()<<std::endl;
        std::cout<<"B_Long::nextValueFromA "<<LibB_Long::nextValueFromA()<<std::endl;
        std::cout<<"B_Long::nextValueFromB "<<LibB_Long::nextValueFromB()<<std::endl;
        std::cout<<"B_Long::nextValueFromBInline "<<LibB_Long::nextValueFromBInline()<<std::endl;
    }
    for  (int c=0;c<2;c++)
    {
        std::cout<<"A<int>::nextTValueFromA<unsigned short> "<<LibA<int>::nextTValueFromA<unsigned short>()<<std::endl;
        std::cout<<"B::nextTValueFromA<unsigned short> "<<LibB::nextTValueFromA<unsigned short>()<<std::endl;
        std::cout<<"B::nextTValueFromB "<<LibB::nextTValueFromB()<<std::endl;
        std::cout<<"B::nextTValueFromBInline<unsigned short> "<<LibB::nextTValueFromBInline<unsigned short>()<<std::endl;
    }
    for  (int c=0;c<2;c++)
    {
        std::cout<<"A_Long::nextTValueFromA<unsigned short> "<<LibA_Long::nextTValueFromA<unsigned short>()<<std::endl;
        std::cout<<"B_Long::nextTValueFromA<unsigned short> "<<LibB_Long::nextTValueFromA<unsigned short>()<<std::endl;
        std::cout<<"B_Long::nextTValueFromB "<<LibB_Long::nextTValueFromB()<<std::endl;
        std::cout<<"B_Long::nextTValueFromBInline<unsigned short> "<<LibB_Long::nextTValueFromBInline<unsigned short>()<<std::endl;
    }

    return 0;
}
