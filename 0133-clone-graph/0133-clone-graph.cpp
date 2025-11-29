/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;  // base case

        unordered_map<Node*, Node*> mp;     // old -> new mapping
        return dfs(node, mp);
    }

    Node* dfs(Node* node, unordered_map<Node*, Node*>& mp) {
        // If already cloned, just return the clone
        if(mp.count(node)) return mp[node];

        // Create a new node with same value
        Node* copy = new Node(node->val);
        mp[node] = copy; // mark it as cloned

        // Clone all neighbors
        for(Node* nbr : node->neighbors) {
            copy->neighbors.push_back(dfs(nbr, mp));
        }

        return copy;
    }
};
