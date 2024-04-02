#include "minunit-master/minunit.h"
#include "calculadora.h"

MU_TEST(test_check) {
	mu_assert(6 == soma(5,1),"Soma invalida");
}
MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_check);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}