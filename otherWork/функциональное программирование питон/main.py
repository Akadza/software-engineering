from math import sin


func1 = lambda x: pow(x, 2) + 1
func2 = lambda x: sin(pow(x, 2)) - 1


def process_function(func1, func2) -> float:
    return func1(5) + func2(7)


print(process_function(func1, func2))
