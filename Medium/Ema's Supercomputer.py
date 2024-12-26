def twoPluses(grid):
    maxProduct = 0
    splitedGrid = splitGrid(grid)
    setEdgeLen(splitedGrid)
    for i, rowFst in enumerate(splitedGrid):
        for j, itemFst in enumerate(rowFst):
            if itemFst == "B":
                continue
            for k in range(1, itemFst+1):
                copyGrid = splitGrid(grid)
                updateAndCopy(copyGrid, i, j, k)
                setEdgeLen(copyGrid)
                for iSec, rowSec in enumerate(copyGrid):
                    for jSec, itemSec in enumerate(rowSec):
                        if itemSec == "B":
                            continue
                        product = getPlusLen(k) * getPlusLen(itemSec)
                        if product > maxProduct:
                            maxProduct = product
    return maxProduct

def splitGrid(grid):
    return [[*row] for row in grid]
    
def updateAndCopy(grid, i, j, k):
    grid[i][j] = "B"
    while k > 1:
        idx = k - 1
        grid[i-idx][j] = "B"
        grid[i+idx][j] = "B"
        grid[i][j-idx] = "B"
        grid[i][j+idx] = "B"
        k = k-1

def getPlusLen(edgeLen):
    return (edgeLen-1) * 4 + 1
    
def setEdgeLen(grid):
    for i, row in enumerate(grid):
        for j, item in enumerate(row):
            if item == "B":
                continue
            idx = 1
            while True:
                if i - idx < 0 or grid[i - idx][j] == "B":
                    break
                if i + idx > len(grid)-1 or grid[i + idx][j] == "B":
                    break
                if j - idx < 0 or grid[i][j - idx] == "B":
                    break
                if j + idx > len(grid[0])-1 or grid[i][j + idx] == "B":
                    break
                idx = idx+1
            grid[i][j] = idx
