// Last updated: 15/10/2026 11:34:58
class MinStack {
public:
    MinStack() {
        stack_vector = std::vector<int>(0);  
        minimums = std::vector<int>(0);
    }
    
    void push(int value) {

        stack_vector.push_back(value);

        if (minimums.empty()) {
            minimums.push_back(value);
            }

        else{
            int ancien_minimum = minimums.back();
            if (ancien_minimum > value ){
                minimums.push_back(value);
            }
            else{
                minimums.push_back(ancien_minimum);
            }
        }
        
    }
    
    
    void pop() {
        stack_vector.pop_back();
        //la prochaine valeur sera ecrite à cet endroit
        minimums.pop_back();
        
    }
    
    int top() {
        if (stack_vector.empty()){
            return 0;
        }
        return stack_vector[stack_vector.size()-1];
    }
        
    
    int getMin() {

        if (stack_vector.empty()){
            return 0;
        }

        int min = minimums.back();
        
        return min;
        
    }

private:
    std::vector<int> stack_vector;
    std::vector<int> minimums;


};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */