all: main
main: game_state.o game_tree.o node.o queue.o square_state.o stack.o t_node.o assig_three221.o
	gcc -o main game_state.o game_tree.o node.o queue.o square_state.o stack.o t_node.o assig_three221.o

assig_three221.o: assig_three221.c
	gcc -c assig_three221.c
t_node.o: t_node.c
	gcc -c t_node.c
stack.o: stack.c
	gcc -c stack.c
game_state.o: game_state.c
	gcc -c game_state.c
square_state.o: square_state.c
	gcc -c square_state.c
queue.o: queue.c
	gcc -c queue.c

node.o: node.c
	gcc -c node.c

game_tree.o: game_tree.c
	gcc -c game_tree.c
clean:
	rm -rf *o main
