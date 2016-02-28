//This file is included, so this is required!
#ifndef _LINC_TEST_CPP_
#define _LINC_TEST_CPP_

#include "./linc_test.h"
#include <hxcpp.h>
#include <stdio.h>

namespace linc {
	namespace test {
		void say_hello() {
			printf("hello from linc!\n");
		}
	} // namespace test
} // namespace linc

#endif // _LINC_TEST_CPP_
