Test2:	Test2.cpp Event.o Time.o Timing.o
	g++  Test2.cpp Event.o Time.o Timing.o -o Test2

Event.o:	Event.cpp Event.h
	g++ Event.cpp -c

Time.o:	Time.cpp Time.h
	g++	Time.cpp -c

Timing.o:	Timing.cpp
	g++ Timing.cpp Timing.h