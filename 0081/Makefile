ID=81

all: $(ID).cpp
	g++ $^ -o $(ID) -O3 -Wall -Wextra -std=c++0x -pedantic -Weffc++

time: all
	/usr/bin/time ./$(ID)

clean:
	rm -f $(ID)
