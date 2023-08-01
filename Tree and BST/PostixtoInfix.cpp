
/*struct et
{
	char value;
	et* left, *right;
};*/

//function to construct expression tree
et* constructTree(char postfix[])
{
    //code here
    stack <et*> st;
    
    for(int i=0; i<strlen(postfix); i++)
    {
        
        et* tmp = (et*) malloc(sizeof(et));
        tmp->value = postfix[i];
        if(isOperator(postfix[i]))
        {
            tmp->right = st.top();
            st.pop();
            tmp->left = st.top();
            st.pop();
        }
        else
            tmp->left = tmp->right = NULL;
        st.push(tmp);
    }
    return st.top();
}
