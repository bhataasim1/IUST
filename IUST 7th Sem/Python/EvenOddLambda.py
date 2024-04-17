def even_odd_using_lambda_filter(n: int):
    even_result = list(filter(lambda x: x % 2 == 0, range(1, n+1)))
    print("Even = ",even_result)

    odd_result = list(filter(lambda y: y % 2 != 0, range(1, n+1)))
    print("Odd = ", odd_result)

num = int(input("Enter the Number "))
even_odd_using_lambda_filter(num)