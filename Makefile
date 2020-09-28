solve: transform generate solve.o
	g++ -o solve solve.o

transform: transform.o
	g++ -o transform transform.o

transform.o: transform.cpp sudoku.h
	g++ -c transform.cpp

solve.o: solve.cpp sudoku.h clock.h
	g++ -c solve.cpp

generate: generate.o
	g++ -o generate generate.o

generate.o: generate.cpp sudoku.h
	g++ -c generate.cpp

clean:
	rm solve transform generate *.o
