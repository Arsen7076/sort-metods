export EXE := sort
export C_files := $(wildcard *.cpp)
export O_files := $(patsubst %.cpp, %.o, $(C_files))
prefix = ../bin
$(EXE) : $(O_files)
		g++ $^ -o ../bin/$@
%.o : %.cpp
		g++ -c $^ -o $@ 


clean : 
		rm *.o $(EXE)
