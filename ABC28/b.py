str=input()
char_list = list(str)
ans_list = [0]*6

for x in char_list:
    if x == "A":
        ans_list[0] += 1
    elif x == "B":
        ans_list[1] += 1
    elif x == "C":
        ans_list[2] += 1
    elif x == "D":
        ans_list[3] += 1
    elif x == "E":
        ans_list[4] += 1
    elif x == "F":
        ans_list[5] += 1

print(ans_list[0], ans_list[1], ans_list[2], ans_list[3], ans_list[4], ans_list[5])
