CC=gcc
#.PHONY:all
OBJ ?= main.o sum.o diff.o 
all: hello
#	@mkdir Build
#	@mv *.o hello Build
#	@echo "Test"
#hello: main.o sum.o diff.o
hello: $(OBJ)
	$(CC) $^ -o $@

#main.o: main.c
#	$(CC) -c $<

#sum.o:  sum.c
#	$(CC) -c $<

#hello.o: diff.c
#	$(CC) -c $<

#Now I see a lot of repetition here. The only parts that differ here are the bases of the filesnames. Luckily, there
#is a way of compacting these two rules into one -- it's called pattern matching and has saved me quite a bit of
#time in my short lifetime
#Here pattern may contain a ‘%’ which acts as a wildcard, matching any number of any characters within a word
## The above 6 line work is done in a below single statement ####
%.o:%.c
	$(CC) -c $<
clean:
	@rm -rf Build
