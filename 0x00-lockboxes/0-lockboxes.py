#!/usr/bin/python3
def canUnlockAll(boxes):
    """
    a method that determines if all the boxes can be opened.

    """
    key = [0]
    result = [j for j in range(len(boxes))]
    for i in key:
        if i in range(len(boxes)):
            for x in boxes[i]:
                if x not in key:
                    key.append(x)
    key.sort()
    key = key[:len(boxes)]
    if result == key:
        return True
    else:
        return False
