

element= A B C

a= A.c A.c b.c
e= ${a:.c=_cos}

f := $(subst .c,.d, $(a))

w=$(foreach var,$(element), prefix_$(var)_suffix , again_$(var) )

all:
	@echo "Example of foreach"
	@echo "Element: $(element)"
	@echo  "$(w)"
	@echo  "variable a  <=> $(a)"
	@echo "simple append and replace $(e)"
	@echo "$(f)"
