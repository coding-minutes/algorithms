def findValue(numbers, number_to_find):
	low = 0
	high = len(listnumbers - 1

	while low <= high:
		middle = low + (high - low) // 2

		if numbers[middle] == number_to_find:
			return middle
		elif numbers[middle] < number_to_find:
			low = middle + 1
		else:
			high = middle - 1
	return -1
