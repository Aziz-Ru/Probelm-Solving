#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
};
struct Node *start=NULL;
void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}
void insertAtBegin(){
	
}
void solve(){
	
	struct Node *Head=NULL;
		for(int i=0;i<8;i++){
			int x; cin>>x;
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=x;
		temp->next=NULL;
		if(Head==NULL){
			Head=temp;
			start=temp;
		}
		else{
			start->next=temp;
			start=start->next;
		}
	}
	printList(Head);
}
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
  solve();
  return 0;
}