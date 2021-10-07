#include<stdio.h>

typedef struct _Node Node;
Node *insertNode(Node *root, int value);

//定义树结构体 
typedef struct _Node{
    int data;
    Node *left;
    Node *right;    
}Node;
 
Node *insertNode(Node *root, int value){ 
    //1.创建一个节点
    Node *node = (Node*)malloc(sizeof(Node));
    node -> data = value;
    node -> left = NULL;
    node -> right = NULL;
    //2.判断树是不是空树
    if (root = NULL){
        root = node;    
    }else{
        Node temp* = root;
        while(temp != NULL){
            if(value < temp->data){ //如果当前访问的值大于新值 
                if (temp -> left = NULL){
                    temp -> left = node;   
                }else{
                    temp = temp -> left;
                }    
            }else{                  //如果当前访问的值小于新值 
                if(temp->right == NULL){
                    temp->right = node;
                }
                else{
                    temp = temp->right;
                }
            }    
        }
        node = temp;
        free(temp);
        return node;    
    }     
} 



int main(){
    Node *root = NULL;
    Node *insertNode(root, 3);
    return 0; 
  
}
