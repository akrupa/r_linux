

############################### We have four option 
################ Lazy Set
# var = value
#   Normal setting of a variable - values within it are recursively 
# expanded when the variable is used, not when it's declared


#################  Immediate Set
#   Setting of a variable with simple expansion 
# of the values inside - values within it are expanded at declaration time.
# var := value


################## Set if Absent
# var ?= value
# Setting of a variable only if it doesn't have a value

################# Append
# var += value
#   Appending the supplied value to the existing value 
# (or setting to that value if the variable didn't exist)


zm_var = zm_value_a
zm_var ?= zm_value_b

all:
	@echo $(zm_var)
