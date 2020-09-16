#########################################
# Program name
NAME = megaphone

#########################################
# Compilation commands 
CC = clang++
FLAGS =  -Wall -Werror -Wextra

# LIBRARIES = -lmlx -lft -L$(LIBFT_DIRECTORY) -L$(MINILIBX_DIRECTORY) -framework OpenGL -framework AppKit
INCLUDES = -I$(HEADERS_DIRECTORY) 

#########################################
# Libft 
# LIBFT = $(LIBFT_DIRECTORY)libft.a
# LIBFT_DIRECTORY = ./libft/
# LIBFT_HEADERS = $(LIBFT_DIRECTORY)


#########################################
# Headers 
HEADERS_LIST = 	index.h
# 				keys.h\
# 				errors.h\
# 				get_next_line.h
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

#########################################
# Sources 
SOURCES_LIST =	megaphone.cpp 
	
SOURCES_DIRECTORY = ./
SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))

#########################################
# Objects
OBJECTS_DIRECTORY = objects/
OBJECTS_LIST = $(patsubst %.cpp, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

#########################################
# Args tests 
ARGS = "Hello" " World"
# MAPS_DIRECTORY = ./maps/

#########################################
# COLORS
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
RED = \033[31m
ORANGE = \033[38;5;208m
GREEN = \033[38;5;34m
HIGHGREEN = \033[38;5;46m
YELLOW = \033[33m
BLUE = \033[38;5;21m
MAGENTA = \033[35m
PINK = \033[38;5;212m
CYAN = \033[36m
GREY = \033[38;5;244m
WHITE = \033[37m

#########################################
# Compile and create everything.
all: $(NAME)

#########################################
# Compile the program from the objects.
# $(NAME): $(LIBFT) $(MINILIBX) $(OBJECTS_DIRECTORY) $(OBJECTS)
# 	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(OBJECTS) -o $(NAME)
# 	@echo "$(NAME): $(GREEN)Object files are created$(RESET)"
# 	@echo "$(NAME): $(YELLOW)$(NAME) is created$(RESET)"

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)
	@echo "$(NAME): $(GREEN)Object files are created$(RESET)"
	@echo "$(NAME): $(YELLOW)$(NAME) is created$(RESET)"

#########################################
# Create Objects directory if it doesn't exist
$(OBJECTS_DIRECTORY):
	@mkdir -p $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(GREEN)$(OBJECTS_DIRECTORY) directory is created$(RESET)"

#########################################
# This won't run if the source files don't exist or are not modified.
# $(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
# 	@$(CC) $(FLAGS) -c $< -o $@
# 	@echo "$(NAME): $(GREEN)Creating $*.o$(RESET)"

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(NAME): $(GREEN)Creating $*.o$(RESET)"

#########################################
# Make libft if necessary
# $(LIBFT):
# 	@echo "$(NAME): $(GREEN)Creating $(LIBFT)...$(RESET)"
# 	@$(MAKE) -sC $(LIBFT_DIRECTORY)

#########################################
# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean re

#########################################
# The COLOR Option is a bonus functionnality
# first we need to clean the objects files
objcolclean: 
	@rm -rf $(OBJECTS_DIRECTORY)
# @rm $(LIBFT)
	@echo "$(NAME): $(ORANGE)$(OBJECTS_DIRECTORY) directory is deleted$(RESET)"
	@echo "$(NAME): $(ORANGE)object files are deleted$(RESET)"

#########################################
# Rule to remove all the object files.
clean:
	# @$(MAKE) -sC $(LIBFT_DIRECTORY) clean
	# @$(MAKE) -sC $(MINILIBX_DIRECTORY) clean
	@rm -rf $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(ORANGE)$(OBJECTS_DIRECTORY) directory is deleted$(RESET)"
	@echo "$(NAME): $(ORANGE)object files are deleted$(RESET)"

#########################################
# Rule to remove everything that has been created by the makefile.
fclean: clean
	# @rm -f $(MINILIBX)
	# @echo "$(NAME): $(ORANGE)$(MINILIBX) is deleted$(RESET)"
	# @rm -f $(LIBFT)
	# @echo "$(NAME): $(ORANGE)$(LIBFT) is deleted$(RESET)"
	@rm -f $(NAME)
	@echo "$(NAME): $(ORANGE)$(NAME) is deleted$(RESET)"

#########################################
# Rule to re-make everything.
re:
	@$(MAKE) fclean
	@$(MAKE) all

#########################################
# Rule to run the program
# -@./$(NAME) ${MAPS_DIRECTORY}${ARGS}
run: $(NAME)
	@clear
	@echo "$(CYAN)➤ ./$(NAME) ${ARGS} $(RESET)"
	@echo "$(GREEN)-----------------------------------$(RESET)"
	@echo "$(GREEN)-----------------------------------$(RESET)"
	@echo "$(YELLOW)-----------------------------------$(RESET)"
	@echo "$(YELLOW)            Running $(NAME)$(RESET)"
	@echo "$(YELLOW)-----------------------------------$(RESET)"
	@echo "$(RED)-----------------------------------$(RESET)"
	@echo "$(RED)-----------------------------------$(RESET)"
	-@./$(NAME) ${ARGS}


