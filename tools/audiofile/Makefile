CXX := g++

libaudiofile.a: audiofile.o
	$(AR) rcs $@ $^

audiofile.o: audiofile.cpp audiofile.h aupvlist.h
	$(CXX) -std=gnu++11 -O3 -ffast-math -I. -c audiofile.cpp

clean:
	$(RM) audiofile.o libaudiofile.a

.PHONY: clean
