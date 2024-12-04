vector<string> cavityMap(vector<string> grid) {
    for(int i = 1; i < grid.size() - 1; i++){
        for(int j = 1; j < grid[i].size()-1; j++){
            if(grid[i][j] > grid[i][j-1] && grid[i][j] > grid[i][j+1])
                if(grid[i][j] > grid[i-1][j] && grid[i][j] > grid[i+1][j])
                grid[i][j] = 'X'; 
        }
    }
    return grid;
}
