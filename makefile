all: hw0101.o hw0101another.c hw0102.o hw0102another.c hw0103.o hw0104.o hw0104another.c hw0105.o hw0105another.c
	gcc hw0101another.c hw0101.o -o hw0101
	gcc hw0102another.c hw0102.o -o hw0102
	gcc hw0103.o -o hw0103
	gcc hw0104another.c hw0104.o -o hw0104
	gcc hw0105another.c hw0105.o -o hw0105

hw0101: hw0101.c
	gcc -c hw0101.c -o hw0101.o 
	gcc -shared hw0101.o -o libhw0101.so

hw0102: hw0102.c
	gcc -c hw0102.c -o hw0102.o 
	gcc -shared hw0102.o -o libhw0102.so

hw0103: hw0103.c
	gcc -c hw0103.c -o hw0103.o 
	gcc -shared hw0103.o -o libhw0103.so

hw0104: hw0104.c
	gcc -c hw0104.c -o hw0104.o 
	gcc -shared hw0104.o -o libhw0104.so

hw0105: hw0105.c
	gcc -c hw0105.c -o hw0105.o 
	gcc -shared hw0105.o -o libhw0105.so