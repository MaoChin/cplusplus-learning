#include <iostream>

class T
{
public:
	T(T* t)
	{
		t->x_ = x_;
	}
	T(int x = 1)
		:x_(x)
	{}

private:
	int x_ = 1;

};

int main()
{
	T t1;
	T t2(&t1);

	return 0;
}
