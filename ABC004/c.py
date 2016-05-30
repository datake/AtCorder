n = int(input())
card = [i+1 for i in range(6)]
# 30回操作すると一周してもどる
n = n % 30

# 5回操作すると結果的にひとつずつ左にずれる
for i in range(n // 5):
    card.append (card.pop(0))

for i in range(n % 5):
    #swap
    card[i % 5], card[i % 5 + 1] = card[i % 5 + 1], card[i % 5]
    # left = card[i % 5]
    # card[i % 5] = card[i % 5 + 1]
    # card[i % 5 + 1] = left



print(card[0], card[1], card[2], card[3], card[4], card[5],sep="")
