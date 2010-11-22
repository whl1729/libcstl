/*
 * libcst unit test main function.
 */
#include <stddef.h>
#include <stdarg.h>
#include <setjmp.h>
#include <google/cmockery.h>

#include "ut_cstl_alloc_aux.h"
#include "ut_cstl_alloc.h"

int main(int argc, char* argv[])
{
    const UnitTest tests[] = {
        UT_CSTL_ALLOC_AUX_CASE,
        UT_CSTL_ALLOC_CASE
    };

    return run_tests(tests);
}
