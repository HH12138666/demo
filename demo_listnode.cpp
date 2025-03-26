#include <iostream>
using namespace std;
struct node {
  int data;
  node *next;
  node(int d) {data = d;next = NULL;}
};
int main() {
  node* p1 = new node(1);
  node *head = NULL;
  head = p1;
  cout << head->data << endl;
  return 0;
}
// Created by H H on 25-3-26.
//
