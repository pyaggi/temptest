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
    return 0;
}
