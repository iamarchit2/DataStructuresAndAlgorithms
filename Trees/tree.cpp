#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node * left;
    Node * right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node * insert (Node * root, int x){}
Node * createBST()
{
	int x;
	Node * root=NULL;
	while(true)
	{
		cin>>x;
		if(x==-1) break;
		root= insert(root,x);
	}
	return root;
}
void printLevel2(Node * root) 
{
    if (root == NULL) return ;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) 
    {
        Node * cur = q.front();
        q.pop();
        if (cur == NULL) 
        {
            cout << endl;
            if (q.empty() == false) 
            {
                q.push(NULL);
            }
            continue;
        }
        cout << cur->data << " ";
        if  (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}
int main() 
{
     Node * root = inputTree();
     printTree(root);
    Node * root = createTreeLevel();
    printLevel2(root);
     int ans = height(root);
     cout << ans << endl;
     int x; cin >> x;
     Node * ans = findEle(root, x);
     cout << ans << " ";
     if (ans) cout << ans->data << endl;
     int K; cin >> K;
     printAtLevelK(root, K);
}

	
