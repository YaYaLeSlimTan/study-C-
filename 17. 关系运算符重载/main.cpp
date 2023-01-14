#include <iostream>
#include "RelationalOperatorOverLoading.h"
using namespace std;

void test01() {
	Person p1(14, "лют╡вп");
	Person p2(22, "лют╡вп╣д╟ж╟ж");
	printf("%d\n", p1 == p2);
}

int main() {
	test01();
	return 0;
}