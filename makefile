main: main.o HGL.o line.o circle.o ellipse.o triangle.o rectangle.o
	g++ -g -o main main.o HGL.o line.o circle.o ellipse.o triangle.o rectangle.o -lGL -lGLU -lglut

main.o: main.cpp
	g++ -g -c main.cpp

HGL.o: HGL.cpp HGL.h
	g++ -g -c HGL.cpp

line.o:line.cpp line.h
	g++ -g -c line.cpp

circle.o:circle.cpp line.h
	g++ -g -c circle.cpp

ellipse.o:ellipse.cpp ellipse.h
	g++ -g -c ellipse.cpp

triangle.o:triangle.cpp triangle.h
	g++ -g -c triangle.cpp

rectangle.o:rectangle.cpp rectangle.h
	g++ -g -c rectangle.cpp

clean:
	rm -f *.o
