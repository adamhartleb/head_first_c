encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

checksum.o: checksum.c checksum.h
	gcc -c checksum.c

message_hider.o: message_hider.c checksum.h encrypt.h
	gcc -c message_hider.c

libhfsecurity.a: checksum.o encrypt.o
	ar -rcs libhfsecurity.a checksum.o encrypt.o

launch: libhfsecurity.a message_hider.o
	gcc message_hider.o -I. -L. -lhfsecurity -o message_hider