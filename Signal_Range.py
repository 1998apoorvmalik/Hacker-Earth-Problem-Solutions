test_cases = int(input())
while(test_cases>0):
    n = int(input())
    tower_heights = [int(i) for i in input().split()]
    stack_element = []
    stack_index = []
    survived = [i+1 for i in range(0, n)]
    for i in range(len(tower_heights)-1, -1, -1):
        if len(stack_element) != 0 and tower_heights[i] > stack_element[-1]:
            while(len(stack_element) != 0 and stack_element[-1]<tower_heights[i]):
                survived[stack_index[-1]] = stack_index[-1] - i
                stack_element.pop(-1)
                stack_index.pop(-1)
        stack_element.append(tower_heights[i])
        stack_index.append(i)
    for i in range(0, n):
        print(survived[i], end = ' ')
    test_cases -= 1
    print("\n")
