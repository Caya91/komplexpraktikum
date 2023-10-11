SRC = ../hello.c ../name.cc
OBJ = $(SRC:.cc=.o)
TGT = hello

hello: $(OBJ)
	g++ -o $@ $+
	ar -cr $(TGT) *.o
	ranlib $(TGT)

-include $(DEP)
