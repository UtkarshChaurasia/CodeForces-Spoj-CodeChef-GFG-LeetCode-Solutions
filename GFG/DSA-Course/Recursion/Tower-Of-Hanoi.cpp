class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long moves = 0ll;
        if(N>=1)
        {
            moves += toh(N-1,from,aux,to);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            moves++;
            moves+=toh(N-1,aux,to,from);
        }
        return moves;
        
    }

};
