#include <iostream>
using namespace std;
struct A
{
	char a;
	char c;
	int b;
};
struct B
{
	char a;
	int b;
	char c;
};
int main()
{
	A A_a;
	B B_b;
	cout << sizeof(A_a) << endl;
	cout << sizeof(B_b) << endl;

	return 0;
}