#include "liba.h"
TestClass_long::TestClass_long()
{

}
short TestClass_long::test_incCounter_short()
{
    return incCounter<short>();
}
short TestClass::test_incCounter_short()
{
    return incCounter<short>();
}
