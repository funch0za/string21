CC = gcc
GCOV = gcovr
CFLAGS = -Wall -Werror -Wextra -std=c11
TST_LIBS = -lcheck -lsubunit
GCOV_LIBS = -lgcov -coverage
TST_FILES = test/*.c
SRC_FILES = src/*.c
GCOV_FLAGS =   -r . --html --html-details   -o report.html  

all: build_report

build_tst:
	$(CC) $(CFLAGS) $(TST_LIBS) $(GCOV_LIBS) $(TST_FILES) $(SRC_FILES) -o test_string21

run_tst: build_tst
	./test_string21

build_report: run_tst
	$(GCOV) $(GCOV_FLAGS) -o report.html

clean:
	rm *.html *.css *.gcda *.gcno test_string21
