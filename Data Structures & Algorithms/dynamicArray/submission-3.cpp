class DynamicArray {
public:

    DynamicArray(int capacity) : capacity(capacity), length(0) {
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i]=n;
    }

    void pushback(int n) {
        if(length==capacity){
            resize();
        }
        arr[length++] = n;
    }

    int popback() {
        if (length > 0) {
            // soft delete the last element
            length--;
        }
        return arr[length];
    }

    void resize() {
        capacity*=2;
        int* newArr = new int[capacity];
        for (int i = 0 ; i< length; i++){
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray(){
        delete[] arr;
    }

    private :
        int *arr;
        int capacity;
        int length;
};
