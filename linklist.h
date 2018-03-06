#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
using namespace std;
class Linklist{
protected:
    struct node{
        int data;
        node *next;
    };
    node *start,*temp,*newnode, *temp1;
    int num,num1;
public:
    void add_node();
    void display_node();
    Linklist(){
        start = NULL;
    }
};
void Linklist::add_node(){
    cout<<"Enter the number of nodes:-";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"\nEnter the data:-";
        cin>>num1;
        newnode = new node;
        newnode->data =num1;
        newnode->next = NULL;
        if(start == NULL)
            start = newnode;
        else{
            temp= start;
            while(temp->next!=NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}
void Linklist::display_node(){
    temp = start;
    cout<<endl;
    while(temp!=NULL){
        cout<<"\t"<<temp->data;
        temp=temp->next;
    }
}

#endif // LINKLIST_H_INCLUDED
