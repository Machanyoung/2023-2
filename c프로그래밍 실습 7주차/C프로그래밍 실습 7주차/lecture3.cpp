#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE{
	int data;
struct _NODE* next;
} NODE;

void print_list(NODE* head) {
	NODE* p = head;

	while (p->next != NULL) {
		p = p->next;
		printf("%d", p->data);
	}
}

void insert_node_last(NODE* head, int data) {
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = new_node;
	new_node->next = NULL;
}

void insert_node_first(NODE* head, int data) {
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;
	
	new_node->next = head->next;
	head->next = new_node;
}

void delet_node_first(NODE* head) {
	NODE* p = head->next->next;
	free(head->next);
	head->next = p;
}

void delet_node_last(NODE* head) {
	NODE* p_prev;
	NODE* p = head;
	while (p->next != NULL) {
		p_prev = p;
		p = p->next;
	}
	free(p);
}

int main() {
	NODE* head;
	head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;
	//원래는 (*head).next = NULL; 과 같이 next에 접근해야하나, ->를 이용해 포인터가 구조체인 경우에 참조해올 수 있다.//

	NODE* n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = NULL;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n2->next = NULL;
	n1->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 3;
	n3->next = NULL;
	n2->next = n3;

	print_list(head);

	insert_node_last(head, 4);
	insert_node_last(head, 5);

	insert_node_first(head, 6);

	delet_node_first(head);

	delet_node_last(head);

	print_list(head);
	
	return 0;
}