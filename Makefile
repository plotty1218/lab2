lab2: bmi.o main2.o
	g++ -o lab2 main2.o bmi.o

bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

main2.o: main2.cpp bmi.h
	g++ -c main2.cpp

clean:
	rm lab2 *.o
