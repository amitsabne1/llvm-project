// RUN: env CINDEXTEST_EDITING=1 c-index-test -test-load-source-reparse 5 \
// RUN:                                       local -std=c++14 %s 2>&1 \
// RUN: | FileCheck %s --implicit-check-not "error:"

#ifdef MYCPLUSPLUS
extern "C" {
#endif

#ifdef MYCPLUSPLUS
}
#endif

int main()
{
    return 0;
}
