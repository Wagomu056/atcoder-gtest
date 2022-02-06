
for i in range(100):
    line = ''
    for j in range(100):
        if i == 0 or i == 99:
            line += '#'
        else:
            if j == 0 or j == 99:
                line += '#'
            else:
                line += '.'
    print(line)
