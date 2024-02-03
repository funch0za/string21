CC = gcc
OUT = strings
FLAGS = -Wall -Werror -Wextra -std=c11 -g -o $(OUT)

all_tests:
	$(CC) $(FLAGS) memset21.c strncmp21.c strtok21.c test.c  -DTEST_STRNCMP -DTEST_STRTOK -DTEST_MEMSET

test_strncmp21:
	$(CC) $(FLAGS) strncmp21.c test.c -DTEST_STRNCMP

test_strtok21:
	$(CC) $(FLAGS) strtok21.c test.c -DTEST_STRTOK

test_memset21:
	$(CC) $(FLAGS) memset21.c test.c -DTEST_MEMSET

clean:
	rm strings