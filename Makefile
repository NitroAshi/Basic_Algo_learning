CC = clang++
CFLAGS = -std=c++11 -O2 -march=native


all: main.cpp handleSort.cpp BaseSort.cpp \
     BubbleSort.cpp SelectionSort.cpp InsertionSort.cpp QuickSort.cpp \
	 MergeSort.cpp HeapSort.cpp
	
	$(CC) $(CFLAGS) -o main.exe main.cpp \
		handleSort.cpp BaseSort.cpp \
		BubbleSort.cpp SelectionSort.cpp InsertionSort.cpp QuickSort.cpp \
		MergeSort.cpp HeapSort.cpp


clean:
	rm -rf *.o main.exe
