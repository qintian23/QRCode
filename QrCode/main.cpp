#include <iostream>
#include<stdlib.h>

class aa
{
public:
	aa(){}
	int a;
};

class bb
{
	int b;
};

int main()
{

	int i = atoi("111");

	aa a = aa();

	bb b = bb();

	a = (a)b;


}