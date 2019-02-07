SIZE = int(input())
board = []
for _ in range(SIZE):
    board.append(['o']*SIZE)

def valid_move(i, j):
    return (i>=0 and j>=0 and i<SIZE and j<SIZE)

def safe_move(i, j, board):
    for k in range(SIZE):
        if valid_move(i, j-k) and board[i][j-k] == 'q':
            return False
        if valid_move(i-k, j-k) and board[i-k][j-k] == 'q':
            return False
        if valid_move(i+k, j-k) and board[i+k][j-k] == 'q':
            return False
    return True

def place_queen(col, board):
    if col == SIZE:
        return True
    
    for k in range(SIZE):
        if safe_move(k, col, board):
            board[k][col] = 'q'
            if place_queen(col+1, board):
                return True
            else:
                board[k][col] = 'o'

    return False
            
if place_queen(0, board):
    for i in board:
        print(i)