CC = clang++
CFLAGS = -std=c++11 -O2 -march=native



all: main.cpp handleSort.cpp BaseSort.cpp \
     BubbleSort.cpp SelectionSort.cpp
	$(CC) $(CFLAGS) -o main.exe main.cpp \
		handleSort.cpp BaseSort.cpp \
		BubbleSort.cpp SelectionSort.cpp


clean:
	rm -rf *.o main.exe