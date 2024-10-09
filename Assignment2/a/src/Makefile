
output: main.o get_file.o read_file.o write_file.o
	g++ main.o get_file.o read_file.o write_file.o -o output
	
main.o: main.cpp header.h
	g++ -c main.cpp

get_file.o: get_file.cpp header.h
	g++ -c get_file.cpp
	
read_file.o: read_file.cpp header.h
	g++ -c read_file.cpp
	
write_file.o: write_file.cpp header.h
	g++ -c write_file.cpp

clean:
	rm *.o
cleanall:
	rm *.o output
