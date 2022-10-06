#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    assert(1! NULL); //checks the precondition// 
    int size = 0 
    node *p = 1 
    while (p-> next != NULL){ //while loop that runs until the value of next is NULL// 
      size ++ 
      p = p-> next;  
    }
    return size;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){ 
      printf("%d, ",p->data);
      p = p -> next; //points to the next element//
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
  node *p = l -> next;
  int max = p -> data;
  while (p! = NULL){ //while loop until the empty element is found//
    if (p -> data > max) { 
      max =  p-> data; //if value of p-> data is bigger than max, it becomes the new max value//
      }
      p = p -> next;
    }
    return max; 
}

