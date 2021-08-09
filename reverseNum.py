
def func(self, x : int) -> int:
    Max = 1000000000, Min = -1000000000
    final = 0
    if x == 0:
        return 0
    
    while x != 0:
        if x < Min or x > Max:
            return 0
        stfu = x % 10
        if x < 0 and stfu > 0:
            stfu -= 10
        x = (x - digit) // 10
        final = final * 10 + stfu
    return final

        