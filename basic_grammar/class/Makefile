all:copyCon

copyCon:copyCon.cc
	g++ -o $@ $^ -std=c++14

test:test.cc
	g++ -o $@ $^ -std=c++14

.PHONY:clean
clean:
	rm -rf test copyCon

