

m:
	gcc sha1.c -Wall -lcrypto -o  a.out

r:
	cat hello_data.tmp | openssl sha1 | sed 's/(stdin)= //g'
	./a.out

clean:
	rm -f a.out
	rm -f hello_data.tmp
