#include <cstdio>

class Foo
{

	public: Foo()
 {
	printf("ctor Foo() this=%p \n", this);
 }
	#if 0
	~Foo()
	{
		printf("~Foo() this=%p \n", this);
	}
#endif
	explicit Foo(int x) : value(x)
	{	}
	int value;
};

Foo foo(10);

int main()
{ 
	Foo f2;
	Foo *obj;
	obj = new Foo();
	printf("obj = %p\n", obj);
	printf("start of main()...\n");
	{Foo f1;}
	printf("end of main()...\n");
        return 0;
}
