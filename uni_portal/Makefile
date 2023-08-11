CXX := g++ 
CXXFlags := --std=c++11

main: main.cpp Student.cpp Undergrad.cpp Undergrad.h Student.h 
	$(CXX) $(CXXFLAGS) main.cpp Student.cpp Undergrad.cpp -o $@

clean: 
	rm -f *.o rh main *~

.PHONY: clean
