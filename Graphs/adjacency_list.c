#include<stdio.h>
#include<stdlib.h>
#define v 4

typedef struct graph
{
    int data;
    struct graph *next;
}graph;

graph *createnode(int key)
{
    graph *newnode = (graph*)malloc(sizeof(graph));
    newnode->data = key;
    newnode->next = NULL;
    return newnode;
}

void add_edge(graph *adj[],int i,int j)
{
    graph *newnode1 = createnode(j);
    newnode1->next = adj[i];
    adj[i] = newnode1;

    graph *newnode2 = createnode(i);
    newnode2->next = adj[j];
    adj[j] = newnode2;
}

void display_list(graph *adj[])
{
    for(int i=0;i<v;i++)
    {
        printf("%d: ",i);
        graph *temp = adj[i];
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    graph *adj[v];
    for(int i=0;i<v;i++)
        adj[i] = NULL;

    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,1,2);
    add_edge(adj,2,3);

    display_list(adj);

}
