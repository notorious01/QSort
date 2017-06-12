#include <qSort.hpp>
#include <catch.hpp>


SCENARIO("mas")
{
	int m[] = { 7,2,4,3,5 };
	int* f=m;
	int* l=m+4;
	q_Sort(f, l);
	REQUIRE(m[0] == 2);
	REQUIRE(m[1] == 3);
	REQUIRE(m[2] == 4);
	REQUIRE(m[3] == 5);
	REQUIRE(m[4] == 7);
	
}
SCENARIO("matr")
{
 	int mas[3][3] = { 9,6,3,4,82,16,7,91,8 };
	int * fir = &mas[0][0];
	int * las = &mas[2][2];
	q_Sort(fir, las);
	REQUIRE(mas[0][0] == 3);
	REQUIRE(mas[0][1] == 4);
	REQUIRE(mas[0][2] == 6);
	REQUIRE(mas[1][0] == 7);
	REQUIRE(mas[1][1] == 8);
	REQUIRE(mas[1][2] == 9);
	REQUIRE(mas[2][0] == 16);
	REQUIRE(mas[2][1] == 82);
	REQUIRE(mas[2][2] == 91);

	
}
