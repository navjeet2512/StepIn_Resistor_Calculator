SRC = main.c\
resistance.c\
Unity/src/unity.c

INC = -I Unity/src/

Resistance.out: $(SRC)
	gcc $^ $(INC) -o $@ 

run: Resistance.out
	./$^

coverage: $(SRC)
	gcc $(INC) -fprofile-arcs -ftest-coverage  $^ -o R.out
	./R.out