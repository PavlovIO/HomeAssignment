
output: main.o str_form.o isDouble.o header.h
	g++ main.o str_form.o isDouble.o -o output

main.o: main.cpp header.h
	g++ -c main.cpp

str_form.o: str_form.cpp header.h
	g++ -c str_form.cpp

isDouble.o: isDouble.cpp header.h
	g++ -c isDouble.cpp
clean:
	rm *.o output
