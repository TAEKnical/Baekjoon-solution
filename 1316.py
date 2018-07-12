def count_string(S):
    count = 0
    for i in S:
        if len(i) <= 1:
            count+=1
            continue
        else:
            for j in range(len(i)-1):
                if i[j] != i[j+1]:
                    if i[j] in i[j+1:]:
                        tf=False
                        break
                    else:
                        tf=True
                        continue
                else:
                    tf=True
                    continue
            if(tf==True):
                count+=1
    return count


N=int(input())
list_=[]
for i in range(N):
    S=input()
    list_.append(S)
print(count_string(list_))