all : 
	make -C Module_00/ex00
	make -C Module_00/ex01
	make -C Module_00/tests
	
	make -C Module_01/ex00

fclean :
	make -C Module_00/ex00 fclean
	make -C Module_00/ex01 fclean
	make -C Module_00/tests fclean

	make -C Module_01/ex00 fclean


	