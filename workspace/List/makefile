
CCC = g++
CCFLAGS = -ansi

testcontainer: listnode.o container.o common.o testcontainer.o
	$(CCC) -o testcontainer listnode.o container.o common.o testcontainer.o

listnode.o: listnode.h

common.o: common.h

container.o: container.h entry.h common.h 

testcontainer.o: container.h entry.h

clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
