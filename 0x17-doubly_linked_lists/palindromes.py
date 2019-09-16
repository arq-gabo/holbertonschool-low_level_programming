#!/usr/bin/python3
if __name__ == '__main__':
    for x in range(999, 101, -1):
        for y in range(999, 101, -1):
            mul = str(x * y)
            if mul[0] == mul[5] and mul[1] == mul[4] and mul[2] == mul[3]:
                if mul[0] == '9':                  
                    f = open("102-result", "a")
                    f.write(mul)
                    f.close()
                    break
