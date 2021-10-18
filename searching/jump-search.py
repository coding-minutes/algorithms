def jump_search(my_list: list, elem: int):
    n = len(my_list)
    jump_size = int(n ** 0.5)
    prev, step = 0, jump_size

    if my_list[-1] < elem:
        return -1

    packet_number = 1
    while my_list[min(step, n)-1] < elem:
        prev, step = step, step + jump_size
        if prev >= n:
            return -1

    for i in range(prev, step):
        if my_list[i] == elem:
            return i

    return -1


my_list = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610]
elem = int(input())

index = jump_search(my_list, elem)

if index == -1:
    print("Element not found")
else:
    print(f"Element found at {index}")
