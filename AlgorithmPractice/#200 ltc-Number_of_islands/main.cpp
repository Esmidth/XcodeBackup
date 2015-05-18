//
//  main.cpp
//  #200 ltc-Number_of_islands
//
//  Created by Steven Chang on 5/5/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void func(vector<vector<char>> & grid,vector<vector<char>> &temp,int x,int y,char direct)
{
    switch (direct) {
        case 'u':
            if (grid[y][x+1] == '1' && x <= grid.size() - 1 ) {
                if (temp[y][x+1] == '1') {
                    temp[y][x+1] = '0';
                    func(grid,temp, x+1, y, 'r');
                }
                grid[y][x] = '0';
            }
            else if(grid[y][x-1] == '1' && x >= 1)
            {
                if(temp[y][x-1] == '1'){
                    temp[y][x-1] = '0';
                    func(grid,temp, x-1, y, 'l');
                }
                grid[y][x] = '0';
            }
            else if(grid[y+1][x] == '1' && y <= grid.size()-1)
            {
                if(temp[y+1][x] == '1'){
                    temp[y+1][x] = '0';
                    func(grid,temp, x, y+1, 'u');
                }
                
                grid[y][x] = '0';
            }
            /*
            else if(grid[y-1][x] == '1' && y >= 1)
            {
                func(grid, x, y-1, 'd');
                grid[y][x] = '0';
            }
            */
            break;
        
        case 'd':
            if (grid[y][x+1] == '1' && x <= grid.size() - 1 ) {
                func(grid,temp, x+1, y, 'r');
                grid[y][x] = '0';
            }
            else if(grid[y][x-1] == '1' && x >= 1)
            {
                func(grid,temp, x-1, y, 'l');
                grid[y][x] = '0';
            }
            else if(grid[y-1][x] == '1' && y >= 1)
            {
                func(grid,temp, x, y-1, 'd');
                grid[y][x] = '0';
            }
            break;
        case 'l':
            if(grid[y][x-1] == '1' && x >= 1)
            {
                func(grid,temp, x-1, y, 'l');
                grid[y][x] = '0';
            }
            else if(grid[y+1][x] == '1' && y <= grid.size()-1)
            {
                func(grid,temp, x, y+1, 'u');
                grid[y][x] = '0';
            }
            else if(grid[y-1][x] == '1' && y >= 1)
            {
                func(grid,temp, x, y-1, 'd');
                grid[y][x] = '0';
            }
            break;
        case 'r':
            if (grid[y][x+1] == '1' && x <= grid.size() - 1 ) {
                func(grid,temp, x+1, y, 'r');
                grid[y][x] = '0';
            }
            else if(grid[y-1][x] == '1' && y >= 1)
            {
                func(grid,temp, x, y-1, 'd');
                grid[y][x] = '0';
            }
            else if(grid[y+1][x] == '1' && y <= grid.size()-1)
            {
                func(grid,temp, x, y+1, 'u');
                grid[y][x] = '0';
            }
            break;

    }

}
int numIslands(vector<vector<char>>& grid)
{
    vector<vector<char>> temp = grid;
    for (int i = 0; i < temp.size(); i++) {
        for (int j = 0; j < temp.size(); j++) {
            temp[i][j] = '0';
        }
    }
    int sum = 0;

    return sum;
}
int main(int argc, const char * argv[]) {
    vector<vector<char>> grid = {
            {'0','0','0','0','0','0','0'},
            {'0','1','1','1','1','0','0'},
            {'0','1','1','0','1','0','0'},
            {'0','1','1','0','0','0','0'},
            {'0','0','0','0','0','0','0'},
            {'0','0','0','0','0','0','0'},
            {'0','0','0','0','0','0','0'}
    };
    vector<vector<char>> grid2 = {
            {'1','1','0','0','0'},
            {'1','1','0','0','0'},
            {'0','0','1','0','0'},
            {'0','0','0','1','1'}
    };
    cout << "Sum: " <<numIslands(grid)<<endl;
    //cout << "Sum2: " << numIslands(grid2) << endl;
    return 0;
}

