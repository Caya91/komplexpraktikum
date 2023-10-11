SRC = hello.cc name.cc
OBJ = $(SRC:.cc=.o)
TGT = hello
DEP = $(SRC:.cc=.d)
ZIEL = lib.so

hello: $(OBJ) $(ZIEL)
	g++ -o $@ $+

$(ZIEL): $(OBJ)
	g++ -shared -o $@ $+

%.o: %.cc Makefile
	g++ -fPIC -MMD -Wall -Werror -c -o $@ $<

clean:
	rm -f $(OBJ) $(TGT) $(DEP) $(LIB)

-include $(DEP)
