SRC = hello.cc name.cc
OBJ = $(SRC:.cc=.o)
TGT = hello
DEP = $(SRC:.cc=.d)

hello: $(OBJ)
	g++ -o $@ $+

%.o: %.cc Makefile
	g++ -MMD -Wall -Werror -c -o $@ $<

clean:
	rm -f $(OBJ) $(TGT) $(DEP)

-include $(DEP)
