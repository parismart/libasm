NAME = libasm.a

SRCS = strlen.s strcpy.s strcmp.s write.s read.s strdup.s

OBJS = $(SRCS:.s=.o)

LINUX_FLAGS = -f elf64

MAC_FLAGS = -f macho64

.s.o:
	nasm $(LINUX_FLAGS) $<  -o $(<:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) tester

re: fclean all

test: $(NAME)
	clang main.c $(NAME) -o tester
	./tester

.PHONY: all clean fclean re