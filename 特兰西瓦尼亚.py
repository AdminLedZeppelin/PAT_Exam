import math as M
x = input().split()

a = x[0] , b = x[1]

def cacu(x, y):
    MAX = M.max(x, y)
    if MAX == 1:
        print("1/1")
    if MAX == 2:
        print("5/6")
    if MAX == 3:
        print("2/3")
    if MAX == 4:
        print("1/2")
    if MAX == 5:
        print("1/3")
    if MAX == 6:
        print("1/6")
