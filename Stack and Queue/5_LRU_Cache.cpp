/*
The task is to design and implement methods of an LRU cache. The class has two methods get() and set() which are defined as follows.
get(x)   : Returns the value of the key x if the key exists in the cache otherwise returns -1.
set(x,y) : inserts the value if the key x is not already present.
            If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
In the constructor of the class the size of the cache should be intitialized.
*/
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// design the class:

class LRUCache
{
private:

public:
        struct Node{
        Node* prev;
        Node* next;
        int val;
        int key;
        Node(int x,int y){
           val=x;
           key=y;
           prev=NULL;
           next=NULL;
        }
    };
    struct DL{
         int size1;
         Node* head;
         Node* tail;
    };
    int c;
    DL* LL=new DL();
    unordered_map<int,Node*> mp;
    LRUCache(int cap)
    {
        mp.clear();
        c=cap;
        LL->size1=0;
        LL->head=new Node(0,0);
        LL->tail=new Node(0,0);
        (LL->head)->next=LL->tail;
        (LL->tail)->prev=(LL->head);
    }
    void del_front(){
        Node* n1=LL->head;
        Node* n2=LL->head->next;
        mp.erase(n2->key);
        n1->next=n2->next;
        n2->next->prev=n2->prev;
        LL->size1--;
    }
    void del(Node* n){
        n->prev->next=n->next;
        n->next->prev=n->prev;
        LL->size1--;
    }
    void push(Node* n){
        Node* n1=LL->tail;
        Node* n2=n1->prev;
        n2->next=n;
        n->prev=n2;
        n1->prev=n;
        n->next=n1;
        LL->size1++;
    }
    int get(int key)
    {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        Node* n=mp[key];
        del(n);
        push(n);
        return n->val;
    }
    
    void set(int key, int value)
    {
        Node* nn=new Node(value,key);
        if(mp.find(key)!=mp.end()){
            Node* n=mp[key];
            del(n);
            push(nn);
        }
        else{
            if(LL->size1<c){
                push(nn);
            }
            else{
                del_front();
                push(nn);
            }
        }
        mp[key]=nn;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends