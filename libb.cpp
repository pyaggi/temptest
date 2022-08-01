#include "libb.h"

LibB::LibB()
{

}
int LibB::nextValueFromB()
{
    return nextValueFromA();
}
unsigned short LibB::nextTValueFromB()
{
    return nextTValueFromA<unsigned short>();
}
int LibB_Long::nextValueFromB()
{
    return nextValueFromA();
}
unsigned short LibB_Long::nextTValueFromB()
{
    return nextTValueFromA<unsigned short>();
}
