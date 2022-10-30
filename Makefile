CC = clang++
CFLAGS = -std=c++11 -O2 -march=native



all: main.cpp handleSort.cpp BubbleSort.cpp \
     BaseSort.cpp
	$(CC) $(CFLAGS) -o main.exe main.cpp \
		handleSort.cpp BubbleSort.cpp \
		BaseSort.cpp


clean:
	rm -rf *.o main.exe