// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// class Node{
//     public:
//     ll key;
//     ll val;
//     Node*next, *prev;

    
//     Node(){};

//     Node(ll k, ll v){
//         this->key = k;
//         this->val = v;
//         this->next = nullptr;
//         this->prev = nullptr;
//     }
// };

// Node* insert_new_node(Node*&head, ll key, ll val){
//     Node* new_no = new Node(key, val);
//     head->next->prev = new_no;
//     new_no->next = head->next;
//     head->next = new_no;
//     new_no->prev = head;
//     return new_no;
// }

// Node* shift_exist_node(Node*&head, Node*&shift, ll ke, ll vl){
//     Node* new_no = new Node(shift->key, shift->val);
//     shift->prev->next = shift->next;
//     shift->next->prev = shift->prev;
//     head->next->prev = new_no;
//     new_no->next = head->next;
//     head->next = new_no;
//     new_no->prev = head;
//     shift->next = nullptr;
//     shift->prev = nullptr;
//     new_no->key = ke;
//     new_no->val = vl;
//     return new_no;
// }

// Node* delete_lru(Node*&tail){
//     Node* todel = tail->prev;
//     todel->prev->next = tail;
//     tail->prev = todel->prev;
//     todel->next = nullptr;
//     todel->prev = nullptr;
//     return todel;
// }

// // first make copy of that list 
// // delete that node
// // head next prev = nn; nn next = head next ; head next = nn; nn prev = head; shifting
// // Inserting new element 
// // Make the Node,   head next prev = nn; nn next = head next ; head next = nn; nn prev = head;
// // Deleting lru
// // dn = tail prev; tail prev = dn prev; dn prev next = tail; dn prev, next = null;

// class LRUCache
// {
//     public:

//     Node*head, *tail;
//     ll cur_size, cap;

//     unordered_map<ll, Node*> mp;

//     LRUCache(int capacity)
//     {
//         // Write your code here
//         head = new Node(0,0);
//         tail = new Node(0,0);
//         head->next = tail;
//         tail->prev = head;
//         cur_size = 0;
//         cap = capacity;
         
//     }

//     int get(int k)
//     {
//         // Write your code here
//         if(mp.find(k) != mp.end()){
//             Node* nn = shift_exist_node(head, mp[k], mp[k]->key, mp[k]->val);
//             mp[k] = nn;
//             return mp[k]->val;
            

//         }

//         else return -1;
        
            
//     }

//     void put(int k, int value)
//     {
//         // Write your code here

//         if(mp.find(k) != mp.end()){
//             Node* nn = shift_exist_node(head, mp[k], k, value);
//             mp[k] = nn;
//         }

//         else if(cur_size == cap){
//             Node* del = delete_lru(tail);
//             Node*nn = insert_new_node(head,k, value);
//             mp[k] = nn; 
//             mp.erase(del->key);

//         }

//         else{
//             Node* nn = insert_new_node(head, k, value);
//             cur_size++;
//             mp[k] = nn;
//         }


//     }
// };

