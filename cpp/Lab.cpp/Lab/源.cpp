#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 100

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
	struct part* next;
};
struct Array {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
}array[4] = { 0 };

struct part* Creat(struct part* head)
{
	struct part* p = (struct part*)malloc(sizeof(struct part));
	 p = head;
	for (int i = 0; i < 4; i++) {
		struct part* node = (struct part*)malloc(sizeof(struct part));
		printf("Please enter number name and on_hand:\n");
		scanf("%d", &node->number);
		scanf("%s", &node->name);
		scanf("%d", &node->on_hand);
		printf("\n");
		p->next = node;
		node->next = NULL;
		p = node;
	}
	return head;
}
struct part* Store(struct part* head, struct Array array[4])
{
	struct part* p = head;
	p = p->next;
	for (int i = 0; i < 4 ; p = p->next,i++) {
		if (p->on_hand >= 600) {
			array[i].number = p->number;
			strcpy(array[i].name, p->name);
			array[i].on_hand = p->on_hand;
		}
	}
	return head;
}

int Calculate(struct Array array[],int &j)
{
	int average = 0;
	for (int i = 0;i<4; i++) {
		average += array[i].on_hand;
		j = i;
	}
	return average/j;
}

int main(void)
{
	int j = 0;
	struct part* head = (struct part*)malloc(sizeof(struct part));
	Creat(head);
	Store(head,array);
	int average = Calculate(array,j);
	FILE * fp = fopen("myfile","wb+");
	if (fp == NULL)
		return 0;
	fwrite(array, sizeof(struct Array),j, fp);
	rewind(fp);
	struct Array a[4];
	fread(a, sizeof(struct Array),j,fp);
	for (int i = 0; i < j; i++) {
		printf("%d ", a[i].number);
		printf("%s ", a[i].name);
		printf("%d ", a[i].on_hand);
		printf("\n");
	}
	fclose(fp);
	return 0;
}