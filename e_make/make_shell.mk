

pwd=$(shell pwd)

z_prefix := prefix
z_suffix := suffix


all:
	@echo $(pwd)
	@echo $(shell pwd)
	@echo $(shell ls) 
	@echo $(shell echo "Hello!")
	@echo $(shell echo "${HOME}")
	@echo $(shell echo -e "a \nb \n c" | cat -n)
	@echo $(shell echo "a b c" | awk '{print "Druga kolumna " $$2 }') 
	@echo $(addprefix $(z_prefix),_$(z_suffix) )
	@echo $(addsuffix _$(z_prefix), $(z_suffix) )
