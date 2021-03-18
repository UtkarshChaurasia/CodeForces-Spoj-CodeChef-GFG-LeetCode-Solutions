/* Removes min element from min heap and returns it */
void MinHeap::MinHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}

int MinHeap::extractMin() {
    // Your code here
    if(heap_size<=0)
        return -1;
        void MinHeap::deleteKey(int i) {
    // Your code here
    //cout<<harr[i]<<" ";
    if (i < heap_size) {
    decreaseKey(i,INT_MIN);
    extractMin();
    }
}

/* Inserts an element at position x into the min heap*/
void MinHeap::insertKey(int k) {
    // Your code here
    //if(heap_size==capacity) return;
    heap_size++;
    int i = heap_size-1;
    harr[i] = k;
    
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

// Decrease Key operation, helps in deleting key from heap
void MinHeap::decreaseKey(int i, int new_val) {
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}
