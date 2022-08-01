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
    return 0;
}
