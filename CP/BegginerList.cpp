#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
const int siz=2e5+7,Inf=1e9+7;
struct Node
{
	int data;
	struct Node *next;
};
void printList(struct Node* node) {
  while (node != NULL) {
  cout<<node->data<<' ';
  node = node->next;
  }
  cout<<nl;
}

struct Node *head=NULL,*start=NULL;
void solve(){
  int n;
  cin>>n; 
  for(int i=0;i<n-1;i++){
  	int x; cin>>x;
    Node *current=(struct Node*)malloc(sizeof(Node));
    current->data=x;
    current->next=NULL;
    if(head==NULL) {
    	head=current;
    	start=current;
    }else{
    	start->next=current;
    	start=start->next;
    }

  }
  printList(head);
  int p; cin>>p;
  //insert at first
  Node *current=(struct Node*)malloc(sizeof(Node));
    current->data=p;
    current->next=head;
    head=current;
printList(head);
//insert at last
    Node *last=(struct Node*)malloc(sizeof(Node));
    last->data=10;
    last->next=NULL;
     Node *ptr=head;
    while(ptr->next!=NULL)ptr=ptr->next;
    ptr->next=last;
printList(head);
//insert At pos 2
int cnt=0;
ptr=head;
while(ptr!=NULL){
	cnt++;
	if(cnt==2){
		Node *p=(struct Node*)malloc(sizeof(Node));
		p->data=100;
		p->next=ptr->next;
		ptr->next=p;
	}
	ptr=ptr->next;
}
printList(head);
struct Node *HeadFast=(struct Node *)malloc(sizeof(Node));
HeadFast->next=head;
while(HeadFast->next!=NULL){
	if(HeadFast->next->data==6){
		HeadFast->next=HeadFast->next->next;
	}
	HeadFast=HeadFast->next;
}
printList(head);

  
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  //TC
  solve();
  return 0;
}