all:
	gcc -c hello.c -fPIC
	gcc -c HelloJNI.c -fPIC -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/darwin
	gcc -shared -o libhello.so hello.o  HelloJNI.o

clean:
	rm *.o *.so