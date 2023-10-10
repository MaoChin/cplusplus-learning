all:namespace test

namespace:namespace.cc
	g++ -o $@ $^ -std=c++14 -g

test:test.cc parameter.cc
	g++ -o $@ $^ -std=c++14 -g

.PHONY:clean
clean:
	rm -r namespace test
