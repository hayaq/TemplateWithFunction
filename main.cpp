#include <stdio.h>

template < class T, void (*D)(T) >
class Foo{
public:
	Foo(T t){
		printf("Foo(%d)\n",t);
		D(t);
	}
};

void Bar(int val){
	printf("Bar(%d)\n",val);
}

int main(void){
	Foo<int,Bar>(1);
	return 0;
}
