#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
};


void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}
void insertAtBegin(struct Node **head,int x){
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=(*head);
	(*head)=temp;
	//printList((*head));
	//cout<<"\n";
}
void inserAtMiddle(struct Node *head,int pos,int x){
	struct Node *node=head;
	int cnt=0;
	while(node!=NULL){
		cnt++;
		if(cnt==pos){
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=x;
		temp->next=node->next;
		node->next=temp;
		}
		node=node->next;
	}
	

}
void insertAtEnd(struct Node** head,int x){
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;

	struct Node *last=(*head);
	
	while(last->next!=NULL) last=last->next;
	last->next=temp;
	}
	
void deleteNode(struct Node **head,int x){

struct Node *HeadFast=(struct Node*)malloc(sizeof(struct Node));
HeadFast->next=*head;
struct Node *temp=HeadFast;

while(temp->next!=NULL) {
	if(temp->next->data==x){
		temp->next=temp->next->next;
	}
	temp=temp->next;
}

}
void solve(){
	
	struct Node *start=NULL;
		for(int i=0;i<8;i++){
			int x; cin>>x;
			if(i<3){
				insertAtBegin(&start,x);
			}
			else insertAtEnd(&start,x);
	    }
	    inserAtMiddle(start,4,77);
	    deleteNode(&start,6);
	printList(start);
}
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
  solve();
  return 0;
}