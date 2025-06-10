prog: main.o funcionario.o
	g++ -o prog main.o funcionario.o 
	
main.o: main.cpp
	g++ -c main.cpp 

funcionario.o: funcionario.cpp funcionario.h
	g++ -c funcionario.cpp 

clean:
	rm *.o prog