ID=12

all: $(ID).c
	gcc $^ -o $(ID) -O3

time: all
	/usr/bin/time ./$(ID)

clean:
	rm -f $(ID)
