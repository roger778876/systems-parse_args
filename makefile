all: parse_args.c
	gcc -o parse_args parse_args.c

run: all
	./parse_args

clean:
	rm -f *.o
	rm -f *~
	rm -f a.out
	rm -f parse_args