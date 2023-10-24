#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};

struct node *start=NULL;

sll_insert(int value)
{
		struct node *new_node,*temp;
		
		new_node = (struct node *) malloc(sizeof(struct node));
		if(new_node==NULL){
                printf("Out of Memory Space:\n");
                exit(1);
        }
	
		new_node->value = value;
		new_node->next = NULL;
		
		if (start == NULL){
			start = new_node;
		}
		else{
			temp = start;
			while (temp->next != NULL){
				temp = temp->next;	
			}
			temp->next = new_node;
		}
}


sll_print_list(){
	struct node *temp = start;
	
	while (temp != NULL){
		printf("%d ", temp->value);
		temp = temp->next;	
	}
}

sll_delete_whole(){
	struct node *next, *temp = start;
	
	while (temp != NULL){
		next = temp->next;	
		free(temp);
		temp = next;
	}
	start = NULL;
}


int main(void)
{
	sll_insert(5);
	sll_insert(6);
	sll_insert(7);
	sll_insert(8);		
	sll_insert(9);
	
	//sll_delete_whole();
	
	sll_print_list();
	
		
}
