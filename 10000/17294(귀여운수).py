k = list(map(int, list(input())))
if len(k) == 1:
    print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')
else:
    v = k[0]-k[1]
    for i in range(len(k)-1):
        if k[i]-k[i+1] != v:
            print('흥칫뿡!! <(￣ ﹌ ￣)>')
            break
    else:
        print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')
