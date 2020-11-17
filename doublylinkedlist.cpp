#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void createthenode(struct node **referr){
      struct node*tempo=(*referr);
                    while(tempo->right!=NULL){
                        tempo=tempo->right;
                    }
   struct  node *gunai=(struct node*)malloc(sizeof(struct node));
   
     gunai->left=tempo;
     tempo->right=gunai;
     gunai->right=NULL;

     cout<<"Enter the value for the doubly linked list"<<endl;
    cin>>(gunai->data);


}




int main(){
    int i;
    cout<<"Enter the elements you want in the doubly linked list"<<endl;
     cin>>i;
     cout<<"Eneter the data paart"<<endl;
     struct node *hen=(struct node*)malloc(sizeof(struct node));
     root=hen;
     hen->left=NULL;
     hen->right=NULL;
    
     cin>>(hen->data);

   for(int h=0;h<i-1;h++){
       createthenode(&root);
   }
   struct node *junaid=root;
   while(junaid!=NULL){
       cout<<junaid->data;
       junaid=junaid->right;
   }


    return 0;
}