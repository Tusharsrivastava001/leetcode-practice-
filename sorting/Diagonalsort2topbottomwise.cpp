class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
     int n=grid.size();
        int m=grid[0].size();
        std::unordered_map<int,std::priority_queue<int>> map1;
        std::unordered_map<int,std::priority_queue<int,std::vector<int>,std::greater<int>>> map2;
        //trick ye use hue hai ki 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               
                if((i-j)>=0) map1[i-j].push(grid[i][j]);
                else  map2[i-j].push(grid[i][j]);
                //yaha par we are puttin the elemet based n the difference
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 
                if((i-j)>=0) {
                    grid[i][j]=map1[i-j].top();
                    map1[i-j].pop();
                }
                else  {
                  
                  grid[i][j]=map2[i-j].top();
                    map2[i-j].pop();
                    }
                //yaha par we are puttin the elemet based n the difference
            }
        }
        return grid;
       
    }
};
