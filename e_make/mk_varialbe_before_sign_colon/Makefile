
# Think witch letter should be show on the screen.
# We are thinking about time of create file.

a: b
	@echo $@
b: c
	@echo $@
c:
	@echo $@

clean:
	rm -f a
	rm -f b
	rm -f c

#########################  a b c
t1: clean 
	touch a
	sleep 1
	touch b
	sleep 1
	touch c
	$(MAKE)
# odp. We will see 'a' and 'b' 
# file 'c'is not change so  we will see sings: 'a', 'b'.
######################### c b a
t1b: clean
	touch c
	sleep 1
	touch b
	sleep 1
	touch a
	$(MAKE)

# output: make: 'a' is up to date.

######################### b c a 
t1c: clean
	touch b
	sleep 1
	touch c
	sleep 1
	touch a
	$(MAKE)
# odp. will see 'b' vecose time of create file 'b' is older than 'a'
# because 'c' is older.

t2: clean
	touch a
	sleep 1
	touch b
	$(MAKE)
# next run make
#
# odp. we will see all sings.


t3: clean
	touch b
	sleep 1
	touch a
	$(MAKE)
# odp. we will see sing 'b' and 'c'

t4: clean
	touch c
	$(MAKE)
# odp. We will see sing 'b' and 'a'

