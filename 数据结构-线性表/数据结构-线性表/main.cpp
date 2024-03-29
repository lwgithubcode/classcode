#define _CRT_SECURE_NO_WARNINGS 1

#include"list.h"

void view()
{
	printf("*************************************\n");
	printf("*   [1]push_back    [2]push_front   *\n");
	printf("*   [3]pop_back     [4]pop_front    *\n");
	printf("*   [5]show_myList  [6]find         *\n");
	printf("*   [7]insert_any   [8]delete_any   *\n");
	printf("*   [9]remove_value [10]modify      *\n");
	printf("*************************************\n");
	printf("请选择:>");
}
int main()
{
	int value = 0;
	size_t index = 0;
	int choice;
	int capacity;
	SeqList myList;
	printf("请输入线性表容量:>");
	scanf("%d", &capacity);
	SeqListInit(&myList,capacity);
	while (1)
	{
		view();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("请输入要插入的值:>");
			scanf("%d", &value);
			SeqListPushBack(&myList, value);
			break;
		case 2:
			printf("请输入要插入的值:>");
			scanf("%d", &value);
			SeqListPushFront(&myList, value);
			break;
		case 3:
			SeqListPopBack(&myList);
			break;
		case 4:
			SeqListPopFront(&myList);
			break;
		case 5:
			SeqList_show(&myList);
			break;
		case 6:
			printf("请输入要查找的值:>");
			scanf("%d", &value);
			index = SeqListFind(&myList, value);
			if (index == -1)
				printf("要查找的元素不存在!\n");
			else
				printf("所查找元素在线性表中首次出现的位置是:%d\n",index+1);
			break;
		case 7:
			printf("请输入要插入的位置:>");
			scanf("%d", &index);
			printf("请输入要插入的值:>");
			scanf("%d", &value);
			SeqListInsert(&myList, index, value);
			break;
		case 8:
			printf("请输入要删除的位置:>");
			scanf("%d", &index);
			SeqListErase(&myList, index);
			break;
		case 9:
			printf("请输入要删除的值:>");
			scanf("%d", &value);
			SeqListRemove(&myList, value);
			break;
		case 10:
			printf("请输入要修改的位置:>");
			scanf("%d", &index);
			printf("请输入要修改的值:>");
			scanf("%d", &value);
			SeqListModify(&myList, index, value);
			break;
		}
	}
	return 0;
}