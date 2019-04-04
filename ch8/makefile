encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

checksum.o: checksum.c checksum.h
	gcc -c checksum.c

message_hider.o: message_hider.c checksum.h encrypt.h
	gcc -c message_hider.c

launch: encrypt.o checksum.o message_hider.o
	gcc encrypt.o checksum.o message_hider.o -o message_hider