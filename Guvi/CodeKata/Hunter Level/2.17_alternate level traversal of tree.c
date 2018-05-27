#include<stdio.h>
#include<math.h>
int main(){ 

struct tree{
    struct tree *left;
    int data;
    struct tree *right;
};

struct tree *root=NULL;
void create(int,struct tree *);
int height(struct tree *);
void printAlternateNodeOfEachLevel(struct tree *,int);
static int first,last;

int main(){
    int choice,val;

    printf("Enter 0 for end the program");
    printf("\nEnter 1 for add a vertex to the tree");
    printf("\nEnter 2 for print alternate node of every level of tree");
    scanf("\n%d",&choice);

    while(choice!=0){
      switch(choice){

        case 0:
           printf("\n adding node to tree will end here");
           break;
        case 1:
           printf("Enter value of childleaf which you want to add= ");
           scanf("%d",&val);
           create(val,root);
           break;
            
        case 2:
                if(root==NULL){
                    printf("\nno elements in the tree");
                }
                else{
                    int h,level;
                    h=height(root);
                    for(level=1;level<=h;level++){
                            first=-1,last=-1;
                            printAlternateNodeOfEachLevel(root,level);
                            if(level%2==0 && last!=-1){
                                printf("%d  ",last);
                            }
                            else{
                                printf("%d  ",first);
                            }
                    }
                }
                break;  
        
            default:
                    printf("\n you entered wrong digit");
                    break;
        }
        printf("\nEnter 0 for end the program");
        printf("\nEnter 1 for add a vertex to the tree");
        printf("\nEnter 2 for print alternate node of every level of tree");
    
        scanf("\n%d",&choice);
    }
    return 0;
}

void create(int val,struct tree *node){
    static struct tree *child_leaf=NULL;
    child_leaf=(struct tree *)malloc(sizeof(struct tree));
    child_leaf->data=val;
    child_leaf->left=NULL;
    child_leaf->right=NULL;
    if(root==NULL){
        root=child_leaf;
    }
    else if(node->data >val){
        if(node->left !=NULL){
            create(val,node->left);
        }
        else{
            node->left=child_leaf;
        }

    }
    else{
        if(node->right !=NULL){
            create(val,node->right);
        }
        else{
            node->right=child_leaf;
        }
    }
}

int height(struct tree *ptr){
    int leftHeight;
    int rightHeight;
    if(ptr==NULL){
        return 0;
    }
    else{
        leftHeight=height(ptr->left);
        rightHeight=height(ptr->right);

        if(leftHeight > rightHeight){
            return (leftHeight+1);
        }
        else{
            return (rightHeight+1);
        }
    }
}

void printAlternateNodeOfEachLevel(struct tree *ptr,int level){
    if(ptr!=NULL){
        if(level==1){
            level--;
            if(first==-1){
                first=ptr->data;
            }
            else{
                last=ptr->data;
            }
        }
        else{
            level--;
            printAlternateNodeOfEachLevel(ptr->left,level);
            printAlternateNodeOfEachLevel(ptr->right,level);
        }
    }
}
    
   
