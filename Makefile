all : 
	make -C Practice/00_bases
	make -C Practice/01_ref1
	make -C Practice/01_ref2
	make -C Practice/01_ref3
	

	make -C Module_00/ex00
	make -C Module_00/ex01
	
	make -C Module_01/ex00
	make -C Module_01/ex01
	# make -C Module_01/ex02

fclean :
	make -C Practice/00_bases fclean
	make -C Practice/01_ref1 fclean
	make -C Practice/01_ref2 fclean
	make -C Practice/01_ref3 fclean
	
	
	make -C Module_00/ex00 fclean
	make -C Module_00/ex01 fclean

	make -C Module_01/ex00 fclean
	make -C Module_01/ex01 fclean
	# make -C Module_01/ex02 fclean


	