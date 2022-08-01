#include "liba.h"
LibA_long::LibA_long()
{

}
short LibA_long::test_incCounter_short()
{
    return incCounter<short>();
}
short LibA::test_incCounter_short()
{
    return incCounter<short>();
}
