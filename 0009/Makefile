ID=9

all: $(ID).c
	g++ $^ -o $(ID) -O3

time: all
	/usr/bin/time ./$(ID)

clean:
	rm -f $(ID)
