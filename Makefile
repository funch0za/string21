CC = gcc
OUT = strings
FLAGS = -Wall -Werror -Wextra -std=c11 -g -o $(OUT)
FILES =  memset21.c strncmp21.c strtok21.c test.c my_random.c

all_tests:
	$(CC) $(FLAGS) $(FILES) -DTEST_STRNCMP -DTEST_STRTOK -DTEST_MEMSET

test_strncmp21:
	$(CC) $(FLAGS) $(FILES) -DTEST_STRNCMP

test_strtok21:
	$(CC) $(FLAGS) $(FILES) -DTEST_STRTOK

test_memset21:
	$(CC) $(FLAGS) $(FILES) -DTEST_MEMSET

clean:
	rm strings *.log