main: elo_rating.o main.o 
	g++ -o main main.o elo_rating.o -lm 
 
elo_rating.o: elo_rating.cpp elo_rating.h 
	g++ -c elo_rating.cpp 
 
main.o: main.cpp elo_rating.h
	g++ -c main.cpp 

