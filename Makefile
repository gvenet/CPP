all : 
	make -C Practice/00_bases

	make -C Practice/01_ref1
	make -C Practice/01_ref2
	make -C Practice/01_ref3

	make -C Practice/01_iostream
	
# =======================

	make -C Module_00/ex00
	make -C Module_00/ex01
	
	make -C Module_01/ex00
	make -C Module_01/ex01
	make -C Module_01/ex02
	make -C Module_01/ex03
	make -C Module_01/ex04
	make -C Module_01/ex05
	make -C Module_01/ex06
	make -C Module_01/ex07

	make -C Module_02/ex00
	make -C Module_02/ex01

	make -C Module_03/ex00
	make -C Module_03/ex01
	make -C Module_03/ex02
	make -C Module_03/ex03
	make -C Module_03/ex04

	make -C Module_04/ex00
	make -C Module_04/ex01
	make -C Module_04/ex02
	make -C Module_04/ex03

	make -C Module_05/ex00
	make -C Module_05/ex01
	make -C Module_05/ex02
	make -C Module_05/ex03

fclean :
	make -C Practice/00_bases fclean
	
	make -C Practice/01_ref1 fclean
	make -C Practice/01_ref2 fclean
	make -C Practice/01_ref3 fclean

	make -C Practice/01_iostream fclean
	
# =======================

	make -C Module_00/ex00 fclean
	make -C Module_00/ex01 fclean

	make -C Module_01/ex00 fclean
	make -C Module_01/ex01 fclean
	make -C Module_01/ex02 fclean
	make -C Module_01/ex03 fclean
	make -C Module_01/ex04 fclean
	make -C Module_01/ex05 fclean
	make -C Module_01/ex06 fclean
	make -C Module_01/ex07 fclean

	make -C Module_02/ex00 fclean
	make -C Module_02/ex01 fclean

	make -C Module_03/ex00 fclean
	make -C Module_03/ex01 fclean
	make -C Module_03/ex02 fclean
	make -C Module_03/ex03 fclean
	make -C Module_03/ex04 fclean
	
	make -C Module_04/ex00 fclean
	make -C Module_04/ex01 fclean
	make -C Module_04/ex02 fclean
	make -C Module_04/ex03 fclean

	make -C Module_05/ex00 fclean
	make -C Module_05/ex01 fclean
	make -C Module_05/ex02 fclean
	make -C Module_05/ex03 fclean
