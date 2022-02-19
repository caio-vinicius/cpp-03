# Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved.
# 42

NAME = claptrap

SOURCES = ./
SOURCES_FILES = ClapTrap.cpp main.cpp ScavTrap.cpp
SOURCES_FILES_FULL = $(addprefix $(SOURCES)/,$(SOURCES_FILES))

OBJECTS = ./objects
OBJECTS_FILES = $(patsubst $(SOURCES)/%.cpp,$(OBJECTS)/%.o,$(SOURCES_FILES_FULL))

CCFLAGS = -g -Wfatal-errors -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME): $(OBJECTS_FILES)
	g++ $^ -o $@

$(OBJECTS)/%.o: $(SOURCES)/%.cpp
	g++ $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all 
