CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = app

all: $(TARGET)

$(TARGET): main.o StringImpl.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o StringImpl.o

main.o: main.cpp StringImpl.h
	$(CXX) $(CXXFLAGS) -c main.cpp

StringImpl.o: StringImpl.cpp StringImpl.h
	$(CXX) $(CXXFLAGS) -c StringImpl.cpp


clean:
	del /Q *.o *.exe