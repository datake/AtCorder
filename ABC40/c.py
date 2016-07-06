n = int(input())
list_in = list(map(int,input().split()))

# 1 index
list_with_index = [(i+1,int(x)) for i,x in enumerate(list_in)]
sorted_list_with_index =sorted(list_with_index, key=lambda x: x[1], reverse=True)
for i,x in sorted_list_with_index:
    print(i)
