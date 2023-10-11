TARGET = prime_sieve
OBJ    = primes.o

CXXFLAGS = -Wall -ggdb3

$(TARGET) : $(OBJ) Makefile
	$(CXX) $(OBJ) -o $(TARGET)

.PHONY : clean cleanall
clean cleanall :
	$(RM) $(OBJ) $(TARGET)
