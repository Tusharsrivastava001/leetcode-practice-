class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
        std::unordered_map<int,std::priority_queue<int,std::vector<int>,std::greater<int>>> map;
        //trick ye use hue hai ki 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                map[i-j].push(grid[i][j]);
                //yaha par we are puttin the elemet based n the difference
            }
        }
        //here minumu elemern is alreadt at the top of secno element map
        //store back 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              grid[i][j]=map[i-j].top();
              map[i-j].pop();
                //yaha par we are puttin the elemet based n the difference
            }
        }
        return grid;
    }
};
