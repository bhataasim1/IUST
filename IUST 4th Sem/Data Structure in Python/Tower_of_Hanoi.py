def tower_of_hanoi(n, fir, mid, last):
    if n == 1:
        print(fir, " -> " ,last)
    else:
        tower_of_hanoi(n-1, fir, last, mid)
        print(fir, " -> ", last)
        tower_of_hanoi(n-1, mid, fir, last)

n = int(input("Enter the Disks : "))
tower_of_hanoi(n, 'A', 'B', 'C')
