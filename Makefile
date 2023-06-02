##
## EPITECH PROJECT, 2022
## task02 Makefile
## File description:
## This will help compile code for task 02
##

ANTMAN 		=	$(MAKE) -C ./antman

GIANTMAN	=	$(MAKE) -C ./giantman

all:	compile_lib
		$(ANTMAN)
		$(GIANTMAN)
compile_lib 	:
			@echo -e "\033[1;32mCompiling Library/033[0m"
			$(MAKE) -C lib/my re
			@echo -e "\033[1;32mDone Compiling Library\n\033[0m"

clean:
	@echo -e "\033[1;31mCleaning/033[0m"
	$(ANTMAN) clean
	$(GIANTMAN) clean
	@echo -e "\033[1;32mDone Compiling Library\n\033[0m"


fclean:	clean
	@echo -e "\033[1;31mCleaning/033[0m"
	$(ANTMAN) fclean
	$(GIANTMAN) fclean
	cd lib/my/ && make fclean
	@echo -e "\033[1;32mDone Compiling Library\n\033[0m"


re:	fclean all
