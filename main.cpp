#include <iostream>
#include <liba.h>
int main(int argc, char *argv[])
{
    std::cout<<"Output from class template example"<<std::endl;
    for  (int c=0;c<2;c++)
    {
        std::cout<<"TestClass<long>::incCounter_short "<<TestClass_template<long>::incCounter<short>()<<std::endl;
        TestClass_long::test_incCounter_short();
        std::cout<<"TestClass_long::incCounter_short "<<TestClass_long::incCounter<short>()<<std::endl;
        TestClass_long::test_incCounter_short();
    }
    std::cout<<"Output from regular class example"<<std::endl;
    for  (int c=0;c<2;c++)
    {
        std::cout<<"TestClass::incCounter_short "<<TestClass::incCounter<short>()<<std::endl;
        TestClass::test_incCounter_short();
        std::cout<<"TestClass::incCounter_short "<<TestClass::incCounter<short>()<<std::endl;
        TestClass::test_incCounter_short();
    }

    return 0;
}
