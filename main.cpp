#include <iostream>
#include <libb.h>
int main(int argc, char *argv[])
{
    for  (int c=0;c<2;c++)
    {
        std::cout<<"LibA<long>::incCounter_short "<<LibA_template<long>::incCounter<short>()<<std::endl;
        LibA_long::test_incCounter_short();
        std::cout<<"LibA_long::incCounter_short "<<LibA_long::incCounter<short>()<<std::endl;
        LibA_long::test_incCounter_short();
    }

    for  (int c=0;c<2;c++)
    {
        std::cout<<"LibA<long>::incCounter_short "<<LibA::incCounter<short>()<<std::endl;
        LibA::test_incCounter_short();
        std::cout<<"LibA_long::incCounter_short "<<LibA::incCounter<short>()<<std::endl;
        LibA::test_incCounter_short();
    }

    return 0;
}
