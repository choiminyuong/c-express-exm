chap5: chap5.o
	gcc -o chap5 chap5.o -lm

chap5.o : chap5.cpp 
	gcc -c chap5.cpp

clean:
	rm *.o
