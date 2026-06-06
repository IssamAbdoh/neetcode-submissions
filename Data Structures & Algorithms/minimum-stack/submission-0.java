class MinStack {
    private List<Integer> list;
    private List<Integer> minList;//it's used to keep track of minimum element inserted everytime an insertion happens

    public MinStack() {
        list = new ArrayList<Integer>();
        minList = new ArrayList<Integer>();
    }
    
    public void push(int val) {
        list.add(val);
        if (minList.isEmpty() || val <= minList.get(minList.size() - 1)) {
            minList.add(val);
        } else {
            minList.add(minList.get(minList.size() - 1));
        }
    }
    
    public void pop() {
        list.remove(list.size() - 1);
        minList.remove(minList.size() - 1);
    }
    
    public int top() {
        return list.get(list.size()-1);
    }
    
    public int getMin() {
        return minList.get(minList.size() - 1);
    }
}