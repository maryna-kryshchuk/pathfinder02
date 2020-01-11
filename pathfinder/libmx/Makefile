NAME = libmx.a

SRCS = src/mx_del_strarr.c src/mx_file_to_str.c src/mx_get_char_index.c src/mx_itoa.c src/mx_memccpy.c src/mx_memchr.c src/mx_memcmp.c src/mx_memcpy.c src/mx_print_strarr.c src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcat.c src/mx_strcmp.c src/mx_strcpy.c src/mx_strdel.c src/mx_strdup.c src/mx_strjoin.c src/mx_strlen.c src/mx_strncpy.c src/mx_strndup.c src/mx_strnew.c src/mx_strsplit.c src/mx_atoi.c
OBJC = obj/mx_del_strarr.c obj/mx_file_to_str.c obj/mx_get_char_index.c obj/mx_itoa.c obj/mx_memccpy.c obj/mx_memchr.c obj/mx_memcmp.c obj/mx_memcpy.c obj/mx_print_strarr.c obj/mx_printchar.c obj/mx_printint.c obj/mx_printstr.c obj/mx_strcat.c obj/mx_strcmp.c obj/mx_strcpy.c obj/mx_strdel.c obj/mx_strdup.c obj/mx_strjoin.c obj/mx_strlen.c obj/mx_strncpy.c obj/mx_strndup.c obj/mx_strnew.c obj/mx_strsplit.c obj/mx_atoi.c
OBJ =  obj/mx_del_strarr.o obj/mx_file_to_str.o obj/mx_get_char_index.o obj/mx_itoa.o obj/mx_memccpy.o obj/mx_memchr.o obj/mx_memcmp.o obj/mx_memcpy.o obj/mx_print_strarr.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcat.o obj/mx_strcmp.o obj/mx_strcpy.o obj/mx_strdel.o obj/mx_strdup.o obj/mx_strjoin.o obj/mx_strlen.o obj/mx_strncpy.o obj/mx_strndup.o obj/mx_strnew.o obj/mx_strsplit.o obj/mx_atoi.o

INC = inc/libmx.h
OBJH = obj/libmx.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install 
install:
	@mkdir obj
	@cp $(SRCS) ./obj
	@cp $(INC) ./obj
	@clang $(CFLAGS) -c $(OBJC) -I $(OBJH)
	@cp *.o ./obj
	@rm *.o
	@ar -rc $(NAME) $(OBJ)
uninstall:
	@rm -rf $(NAME)
clean:
	@rm -rf ./obj
reinstall: uninstall all
