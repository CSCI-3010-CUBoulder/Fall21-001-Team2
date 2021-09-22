all:
	main
main:
	g++ -std=c++17 test.cpp -o test
clean:
	rm test.exe