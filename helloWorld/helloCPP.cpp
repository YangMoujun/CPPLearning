#include <iostream>

class Hello
{
	public: 
		void print()
			{
				printf("Hello World!");
			}
};

int main(int argc, const char *argv[])
{
	Hello *he = new Hello();
	he->print();
	return 0;
}
