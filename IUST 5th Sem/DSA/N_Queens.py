#write a program for n queens problem
#input: n
#output: all possible solutions
#using backtracking
def isSafe(board, row, col):
    for i in range(col):
        if board[row][i] == 1:
            return False
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    for i, j in zip(range(row, n, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    return True
def solveNQUtil(board, col):
    if col >= n:
        return True
    for i in range(n):
        if isSafe(board, i, col):
            board[i][col] = 1
            if solveNQUtil(board, col + 1) == True:
                return True
            board[i][col] = 0
    return False
def solveNQ():
    board = [[0 for j in range(n)] for i in range(n)]
    if solveNQUtil(board, 0) == False:
        print("Solution does not exist")
        return False
    printSolution(board)
    return True
def printSolution(board):
    for i in range(n):
        for j in range(n):
            print(board[i][j], end = " ")
        print()
n = int(input("Enter the value of n: "))
solveNQ()
