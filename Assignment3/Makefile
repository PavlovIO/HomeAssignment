
output: ClassTransformer.o ClassGun.o ClassUltimate.o ClassTransformer.h ClassGun.h ClassUltimate.h ClassDirection.h
	g++  ClassTransformer.o ClassGun.o ClassUltimate.o -o output

ClassTransformer.o: ClassTransformer.cpp ClassTransformer.h ClassGun.h ClassUltimate.h ClassDirection.h
	g++ -c 	ClassTransformer.cpp

ClassGun.o: ClassGun.cpp ClassGun.h
	g++ -c ClassGun.cpp
	
ClassUltimate.o: ClassUltimate.cpp ClassUltimate.h
	g++ -c ClassUltimate.cpp

clean:
	rm -f *.o

cleanall:
	rm -f *.o output
