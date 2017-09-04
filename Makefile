OBJECTS = chap5.o chap6.o

chap5.o : gcc -c chap5.cpp
chap6.o : gcc -c chap6.cpp 

c_express: $(OBJECTS) gcc -o c_express $(OBJECTS) 


clean:
	rm $(OBJECTS)
