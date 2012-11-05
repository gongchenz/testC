//
//  main.c
//  Test
//
//  Created by apple  on 12-10-30.
//  Copyright (c) 2012年 apple . All rights reserved.
//

#include <stdio.h>
#include <malloc/malloc.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

typedef struct Node LinkList;


LinkList *createList(int *array, int leng)
{
    if (leng <= 0) {
        return NULL;
    }
    
    LinkList *myList = (LinkList *)malloc(sizeof(LinkList));
    myList->val = array[0];
    myList->next = NULL;
    
    Node *node, *tempNode;
    
    for (int i=1; i<leng+1; i++) {
        
        node = (Node *)malloc(sizeof(Node));
        node->val = array[i];
        
        if (myList->next == NULL) {
            myList->next = node;
        } else {
            tempNode->next = node;
        }
        
        tempNode = node;
        
    }
    
    return myList;
}

void printList(LinkList *list)
{
    if (list == NULL) {
        return;
    }
    
    LinkList *node = list;
    while (node->next != NULL) {
        printf("%d ", node->val);
        node = node->next;
    }
    
    printf("\n");
}

void fun(int *node)
{
     int N = 100;
    node = &N;
}

int main(int argc, const char * argv[])
{
    
//    int *node = NULL;
//    int a = 0;
//    fun(node);
//    a = *node;
//    printf("%d\n", a);

    
    int arr[5] = {1, 2, 3, 4, 5};
    
    LinkList *list =  createList(arr, 7);
    printList(list);
    return 0;
     
}

