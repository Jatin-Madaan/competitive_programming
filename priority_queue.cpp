#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		int priority;
		Node *next;
};
int main(){
	Node *f,*l,*n,*k,*h,*m,*f1=NULL,*l1,*g,*p1;
	int num,m1,p;
	f=NULL;
	cout<<"enter no of elements : ";
	cin>>m1;
	for(int i=0;i<m1;i++){
	cout<<"\n";
	cout<<"enter value : ";
	cin>>num;
	cout<<"\n";
	cout<<"enter priority : ";
	cin>>p;
	n = new Node;
	n->data = num;
	n->priority = p;
	n->next = NULL;
	if(f==NULL){
		f=n;
		l=n;
	}
	else{
		l->next = n;
		l=n;
	}
}
k=f;
cout<<"linked list \n";
cout<<"(data,priority) : ";
while(k!=NULL){
	cout<<"( "<<k->data<<", "<<k->priority<<" )"<<"->";
	k=k->next;
}
cout<<"NULL";
g = f;
cout<<"\n";
while(g!=NULL){

k=f;
h=f;
g = f;
int max = 0;
while(k!=NULL){
	
	if(k->priority > max ){
		max=k->priority;
	}
	k=k->next;
	}
	m = new Node;
while(h!=NULL){
	if(h->priority == max){
		
		m ->data = h->data;
		m ->priority = h->priority;
		m->next = NULL;
		f=f->next;
		if(f1==NULL){
			f1=m;
			l1=m;
		}
		else{
			l1->next = m;
			l1=m;
		}
		break;
	}
	else{
		if(h->next->priority == max){
			m ->data = h->next->data;
			m->priority = h->next->priority;
			m->next = NULL;
			if(f1==NULL){
			f1=m;
			l1=m;
				}
			else{
			l1->next = m;
			l1=m;
			}
			h->next = h->next->next;
			break;
		}
	}
	h=h->next;
}	
}
p1=f1;
cout<<"priority queue \n";
cout<<"(data,priority) : ";
while(p1!=NULL){
	cout<<"( "<<p1->data<<", "<<p1->priority<<" )"<<"->";
	p1=p1->next;
}
cout<<"NULL";

}
