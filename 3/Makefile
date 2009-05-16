ID=3

all: $(ID).cpp
	g++ $^ -o $(ID) -O3

time: all
	/usr/bin/time ./$(ID)

clean:
	rm -f $(ID)
