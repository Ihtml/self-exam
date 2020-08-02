// 返回已知整数数组a内第一个小于指定值key的元素的下标。若没有找到小于key的元素，则返回-1.
int lessKeyKey(int[] a, int key){
    for(int i = 0; i < a.length; i++){
        if(a[i] < key)
            return i;
    }
    return -1;
}
