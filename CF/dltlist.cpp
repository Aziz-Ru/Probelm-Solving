#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct node
{
	int data;
	int key;
	struct node* next;
};
 node* head=NULL;
 node *start=NULL;

void insert(int key,int data){
	if(key==0){
		start=head=(node*)malloc(sizeof(struct node));
		head->key=key;
		head->data=data;
		head->next=NULL;
	
	}else{
		head->next=(node*)malloc(sizeof(struct node));
		head=head->next;
		head->data=data;
		head->key=key;
		head->next=NULL;
	}
	
	
}
void printList(){
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL){
		cout<<ptr->data<<" "<<ptr->key<<"\n";
		ptr=ptr->next;
	}


}
void solve(){
	
	for(int i=0;i<5;i++){
		int x;cin>>x;
		insert(i,x);
		//inset(x);
	}
	printList();

	
}
int main() {
        #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
  fast;
  solve();
  return 0;
}
