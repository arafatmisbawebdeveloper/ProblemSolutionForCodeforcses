
#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;


Node *insertData(Node *head, Node *tail, int &itemCount){
    int x; cin >> x;
    if(x<0){
        head->next = NULL;
        head->data = 0;
        head->prev = NULL;
        tail = head;
        return tail;
    }
    head->prev = NULL;
    head->data = x;
    head->next = NULL;
    tail = head;
    itemCount++;
    cin >> x;
    while(x>=0){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->prev = tail;
        newNode->data = x;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
        itemCount++;
        cin >> x;
    }
    return tail;
}


// ..........Insert at any position.........
Node *insertAt(Node *head, Node *tail, int &itemCount, int pos){
    cout << "Data: ";
    int x; cin >> x;
    Node *newNode = (Node *)malloc(sizeof(Node));
    int i=0;
    if(pos==i){
        newNode->prev = NULL;
        newNode->data = x;
        newNode->next = head;
        head->prev = newNode;
        itemCount++;
        return newNode;
    }
    else if(pos==itemCount){
        newNode->prev = tail->prev;
        newNode->data = x;
        newNode->next = tail;
        newNode->prev->next = newNode;
        tail->prev = newNode;
        itemCount++;
        return 0;
    }
    else if(pos==itemCount+1){
        newNode->prev = tail;
        newNode->data = x;
        newNode->next = NULL;
        tail->next = newNode;
        itemCount++;
        return newNode;
    }
    i++;
    Node *currentNode = (Node *)malloc(sizeof(Node));
    currentNode = head->next;
    while(i!=pos){
        currentNode = currentNode->next;
        i++;
    }
    newNode->data = x;
    newNode->prev = currentNode->prev;
    newNode->next = currentNode;
    currentNode->prev->next = newNode;
    currentNode->prev = newNode;
    itemCount++;
    return 0;
}

// ...........Replace Data..........
void replace(Node *head, int pos){
    cout << "Data: ";
    int x; cin >> x ;
    Node *currentNode = head;
    int i=0;
    while(i!=pos){
        currentNode = currentNode->next;
        i++;
    }
    currentNode->data = x;
}


void traverseInvrs(Node *tail){
    if(tail->prev == NULL){
        cout << tail->data << "\n";
        return;
    }
    cout << tail->data << " ";
    traverseInvrs(tail->prev);
}


void traverse(Node *head){
    if(head->next == NULL){
        cout << head->data << "\n";
        return;
    }
    cout << head->data << " ";
    traverse(head->next);
}

void search(Node *head, int data, int pos, int itemCount){
    if(pos > itemCount){
        cout << "Data does not exist in the list.\n";
        return;
    }
    else if(head->data == data){
        cout << "Data exist at position: " << pos << "\n";
        return;
    }
    pos++;
    search(head->next,data,pos,itemCount);
}


Node *deleteNode(Node *head, int pos, int &itemCount){
    Node *ptr, *prv = NULL;
    int i=0;
    ptr = head;
    if(i==pos){
        ptr->next->prev = NULL;
        prv = ptr;
        ptr = ptr->next;
        free(prv);
        itemCount--;
        return ptr;
    }
    while(i!=pos){
        prv = ptr;
        ptr = ptr->next;
        i++;
    }
    if(ptr->next == NULL){
        prv->next = NULL;
        free(ptr);
        itemCount--;
        return prv;
    }
    prv->next = ptr->next;
    ptr->next->prev = prv;
    free(ptr);
    itemCount--;
    return head;
}

void clear(Node *head){
    Node *currentNode = head;
    while(currentNode->next != NULL){
        head = currentNode->next;
        free(currentNode);
        currentNode = head;
    }
    free(currentNode);
    cout << "Data cleared successfully.\n";
}

// .........Show Operations........
void Operation(){
    cout << "\n.......Operations........\n";
    cout << "1. Traverse\n";
    cout << "2. Inversely Traverse\n";
    cout << "3. Insert At\n";
    cout << "4. Replace\n";
    cout << "5. Search Data\n";
    cout << "6. Delete Node\n";
    cout << "7. Clear all data\n";
    cout << "0. Exit\n";
}

int main(){
    Node *head, *tail;
    head = (Node *)malloc(sizeof(Node));
    tail = (Node *)malloc(sizeof(Node));

    int itemCount = 0;

    // ....Initial Data Insertion
    cout << "Insert Data(input -1 at the end):\n";
    tail = insertData(head,tail,itemCount);
    itemCount--;

    Operation();
    while(true){
        cout << "\nOperation: ";
        int operation; cin >> operation;
        if(operation==0){
            cout << "Program Exited Successfully.\n";
            break;
        }
        else if(operation==1){
            cout << "Traverse:\n";
            traverse(head);
        }
        else if(operation==2){
            cout << "\nInversely Traverse:\n";
            traverseInvrs(tail);
        }
        else if(operation==3){
            cout << "\nPosition(0-" << itemCount+1 << "): ";
            int pos; cin >> pos;
            if(pos == 0)
                head = insertAt(head,tail,itemCount,pos);
            else if(pos == itemCount+1)
                tail = insertAt(head,tail,itemCount,pos);
            else if(pos<0 and pos>itemCount+1)
                cout << "Invalid position !!!\n";
            else
                insertAt(head,tail,itemCount,pos);
        }
        else if(operation==4){
            // .....Insert at Last
            cout << "\nReplace position: ";
            int pos; cin >> pos;
            replace(head,pos);
        }

        else if(operation==5){
            cout << "Data to search: ";
            int x; cin >> x;
            search(head,x,0,itemCount);
        }

        else if(operation==6){

            cout << "Data position to delete(0-" << itemCount << "): ";
            int pos; cin >> pos;
            if(pos>itemCount){
                cout << "Invalide Position.\n";
            }
            else if(pos<itemCount)
                head = deleteNode(head,pos,itemCount);
            else
                tail = deleteNode(head,pos,itemCount);
        }
        else if(operation==7){
            clear(head);
            cout << "Program Exited Successfully.\n";
            break;
        }
        else
            cout << "Invalide Operation...!!!\n";
    }

    return 0;
}
