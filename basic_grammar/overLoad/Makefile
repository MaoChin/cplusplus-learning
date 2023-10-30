all:test

test:test.cc overLoad.cc
	g++ -o $@ $^ -std=c++14 -g

.PHONY:clean
clean:
	rm -r test
