
class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
       map<vector<int>,int> log;
        log[cells] = 0;
        for(int i=1;i<=N;i++){
            vector<int> tmp = cells;
            for(int j=0;j<8;j++){
                if(j!=0 && j!=7 && tmp[j-1]==tmp[j+1])
                    cells[j]=1;
                else cells[j]=0;
            }
            if(log.count(cells)!=0){
                N = (N-i)%(i-log[cells]);
                if(N>0) cells = prisonAfterNDays(cells, N);
                break;
            }
            log[cells]=i;
        }
        return cells;
    }
};
