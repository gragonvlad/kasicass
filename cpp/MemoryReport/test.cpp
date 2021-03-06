#include "mm_report.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <unordered_map>
#include <string>

class Foo : public mm::ClassNewDelete<mm::TAG_FOO> {
	int a;
};

class Bar : public mm::ClassNewDelete<mm::TAG_BAR> {
public:
	Bar(const std::string& v) { v_ = v; }

private:
	std::string v_;
};

int main()
{
	mm::vector<int, mm::TAG_VECTOR_A> a;
	mm::vector<int, mm::TAG_VECTOR_B> b;

	a.push_back(10);
	// b = a; // error, not support

/*
	Foo *p = new Foo();
	std::cout << mm::MemReport() << std::endl;
	delete p;
	std::cout << mm::MemReport() << std::endl;
*/
	

	/*
	Foo *p = mm::New<Foo>(mm::TAG_FOO);
	std::cout << mm::MemReport() << std::endl;
	mm::Delete(p);
	std::cout << mm::MemReport() << std::endl;

	Bar *b = mm::New<Bar>(mm::TAG_FOO, "Hello");
	std::cout << mm::MemReport() << std::endl;
	mm::Delete(b);
	std::cout << mm::MemReport() << std::endl;

	char *v = (char *) mm::Malloc(mm::TAG_BUFFER, 10);
	std::cout << mm::MemReport() << std::endl;
	mm::Free(v);
	std::cout << mm::MemReport() << std::endl;
	*/

	/*
	// std::vector<int, mm::allocator<int, mm::TAG_VECTOR_INT>> vv;
	// std::vector<int> vv;
	std::vector<int, mm::allocator<int, mm::TAG_VECTOR_INT>> vv;
	vv.push_back(10);
	std::cout << mm::MemReport() << std::endl;
	vv.push_back(20);
	std::cout << mm::MemReport() << std::endl;
	vv.reserve(100);
	std::cout << mm::MemReport() << std::endl;

	std::vector<int, mm::allocator<int, mm::TAG_VECTOR_INT>> vv2;
	vv2 = vv;
	std::cout << mm::MemReport() << std::endl;
	*/

/*
	std::list<int, mm::allocator<int, mm::TAG_LIST_INT>> ll;
	std::cout << mm::MemReport() << std::endl;
	ll.push_back(10);
	std::cout << mm::MemReport() << std::endl;
	ll.push_back(20);
	std::cout << mm::MemReport() << std::endl;

	std::unordered_map<int, int, std::hash<int>, std::equal_to<int>, mm::allocator<std::pair<int, int>, mm::TAG_MAP>> um;
	std::cout << mm::MemReport() << std::endl;
	um[10] = 10;
	std::cout << mm::MemReport() << std::endl;
	um[20] = 20;
	std::cout << mm::MemReport() << std::endl;
*/
}

