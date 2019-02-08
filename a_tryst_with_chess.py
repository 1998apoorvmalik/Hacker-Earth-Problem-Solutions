SIZE = 10
board = [[0 for i in range(SIZE)] for j in range(SIZE)]
x, y, m = [int(i) for i in input().split()]
move_x = [-2, -2, -1, -1, 1, 1, 2, 2]
move_y = [-1, 1, -2, 2, -2, 2, -1, 1]

def mov_poss(x, y):
    return (x >= 0 and x <= 9 and y >= 0 and y <= 9)
    
def move_knight(x, y, count):
    if count == m:
        return
    
    for i in range(8):
        if mov_poss(x+move_x[i], y+move_y[i]):
            new_x = x + move_x[i]
            new_y = y + move_y[i]
            board[new_x][new_y] = count+1
            move_knight(new_x, new_y, count+1)
    
    return

move_knight(x-1, y-1, 0)

count = 0
for i in board:
    count += i.count(m)
print(count)