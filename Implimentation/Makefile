SRC =  unity/unity.c \
		test/test_area.c src/square.c src/circle.c main.c 

INC = -Iinc\
-Iunity\
-Itest

#TEST =  unity/unity.c\
		test/test_square_main.c\
		test/test_square.c\
		src/square.c



PROJECT_NAME = area.out


all  :$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) $(TEST) -o $(PROJECT_NAME)

run :$(PROJECT_NAME)
		./${PROJECT_NAME}
		
doc: make -C documentation


clean: 
		rm -rf $(PROJECT_NAME) documentation/html

