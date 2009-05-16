ID=19

all: $(ID).cs
	gmcs $^ -out:$(ID).exe -o+

time: all
	/usr/bin/time mono ./$(ID).exe

clean:
	rm -f $(ID).exe
