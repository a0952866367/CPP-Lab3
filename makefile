lab3_b : Clock.o lab3_b.o
	g++ -o lab3_b Clock.o lab3_b.o

Clock.o : Clock.cpp Clock.h
	g++ -c Clock.cpp

lab3_b.o : lab3_b.cpp Clock.h
	g++ -c lab3_b.cpp

clean : rm lab3_b *.o
