#include <cstdio>

class Base {
	public:
		int v;
	virtual void print() const
	{
		printf("Base: this=%p v=%d\n", this, v);
	}
};

class Sub : public Base
{
	public:
	int sv;

	void print() const {
		printf("Base: this?%p v=%d sv=%d\n", this, v, sv);
	}

};



int main()
{
	Base b1;
	Sub sub1;

	Base *bptr;
	bptr = &sub1;
printf("sizeof(b1)=%Zd\n", sizeof(b1));
printf("sizeof(sub1)=%zd\n", sizeof(sub1));

	printf("&b1	=%p\n", &b1);
	printf("&sub1	=%p\n", &sub1);
	printf("bptr	=%p\n", bptr);
	sub1.v = 10;
	sub1.sv =20;

	printf("btpr.sv =%d\n", bptr->v);
	bptr->print();
	sub1.print();
	b1.print();

	return 0;

}

