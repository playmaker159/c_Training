    struct Node *prev_node=(struct Node *)malloc(sizeof(struct Node));
    struct Node *next_node=(struct Node *)malloc(sizeof(struct Node));

    struct Node *tempx=*head_ref;
    int swap;
    // struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    while(tempx && tempx->data!=key1){
        prev_node=tempx;
        tempx=tempx->next;
    }
    node1=tempx;
    struct Node *tempy=*head_ref;
    while (tempy && tempy->data!=key2)
    {
        tempy=tempy->next;
    }
    node2=tempy;

    // swap=node2->data;
    // node2->data=node1->data;
    // node1->data=swap;
    // printf("\t\t%d %d",node1->data,node2->data);
    // prev_node->next=node2;


    struct Node *ptr=tempy->next;
    tempy->next=tempx->next;
    tempx->next=ptr;


}