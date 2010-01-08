ID=3

all: $(ID).c
	gcc $^ -o $(ID) -O3 -lm

time: all
	/usr/bin/time ./$(ID)

clean:
	rm -f $(ID)
