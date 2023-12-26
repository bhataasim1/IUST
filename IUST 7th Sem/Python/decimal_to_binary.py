def decimal_to_binary(num: int) -> int:
    if num == 0:
        return 0
    elif num == 1:
        return 1
    else:
        return (num % 2 + 10 * decimal_to_binary(num // 2))
    

print(decimal_to_binary(10))