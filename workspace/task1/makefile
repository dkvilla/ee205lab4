CCC = g++
CCFLAGS = -ansi

lab4task1: stack.o queue.o dequeue.o gstruct_it.o gstruct.o container.o common.o listnode.o driver.o 
	$(CCC) -o lab4task1 stack.o queue.o dequeue.o gstruct_it.o gstruct.o container.o common.o listnode.o driver.o

stack.o: stack.h

queue.o: queue.h

dequeue.o: dequeue.h

gstruct_it.o: gstruct_it.h container.h

gstruct.o: gstruct_it.h container.h gstruct.h

common.o: common.h

container.o: container.h entry.h common.h

listnode.o: listnode.h

driver.o: driver.h

clean:
	rm -f *.o

real_clean: clean
	rm -f lab4task1