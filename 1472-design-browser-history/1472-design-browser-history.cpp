class BrowserHistory {
public:
    stack<string> backw;
    stack<string> forw;
    BrowserHistory(string homepage) {
        backw.push(homepage);
        forw=stack<string>();
    }
    
    void visit(string url) {
        backw.push(url);
        forw=stack<string>();
    }
    
    string back(int steps) {
        while(steps>0 && backw.size()>1){
            forw.push(backw.top());
            backw.pop();
            steps--;
        }
        return backw.top();
    }
    
    string forward(int steps) {
        while(steps>0 && forw.size()>0){
            backw.push(forw.top());
            forw.pop();
            steps--;
        }
        return backw.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */