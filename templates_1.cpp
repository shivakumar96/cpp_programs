#include<iostream>
#include<stdlib.h>
using namespace std ;

template <class T>
struct Node
{
 T v ;

 Node* link ;

};

template <class T>
 Node <T>* getnode()
{
  Node<T>* n  =  new Node<T> ;
  n->link =NULL ;
} 

template <class T>
void display(Node<T>* root)
{

 cout << "\n\n The elements are \n" ;

  while(root != NULL)
  {
    cout << root->v << "<-" ;
    root = root->link ;
  }

}

template <class T>
Node<T>* insert(T key, Node<T>* root )
{
  Node<T>* temp = root ;
  if(root == NULL)
  {
     temp = getnode<T>() ;
     temp->v = key ;

     return temp ;
  }
 cout << "here3" << endl ;
  while(root->link !=NULL)
  {
     root = root->link ;
  }

     root->link = getnode<T>() ;
     root = root->link ;
     root->v = key ;
  

  return temp ;
  
}


int main ()
{

Node<int>* root1  = NULL;
Node<float>* root2 = NULL;

int choice  ;

int in ;

float fn ;

while(true)
{
  cout << "\n\n1: add element to int " << endl ;
  cout << "2: add element to float " << endl ;
  cout << "3: display int " << endl ;
  cout << "4: display float " << endl ;
  cout << "Enter your coice : " ;
  cin >> choice ;
  switch(choice)
  {
   case 1 : 
           cout << "Enter int val : " ;
           cin >> in ;
           root1 = insert<int>(in,root1) ; break ;

  case 2 : 
           cout << "Enter float val : " ;
           cin >> fn ;
           root2 = insert<float>(fn,root2) ; break ;

  
  case 3 :
          display(root1) ; break ;

  case 4 :
          display(root2) ; break ;


  default :
            exit(0) ;         

  }

}

return 0 ;
}
