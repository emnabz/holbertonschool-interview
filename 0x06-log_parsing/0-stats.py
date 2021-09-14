#!/usr/bin/python3
"""stats"""
import sys


if __name__ == "__main__":
    status = {
        "200": 0, "301": 0, "400": 0, "401": 0,
        "403": 0, "404": 0, "405": 0, "500": 0}
    count = 0
    n = 0

    try:
        for line in sys.stdin:
            count += 1
            if len(line) > 2:
                inp = line.split()
                code = inp[-2]
                if code in status.keys():
                    status[code] += 1
            n += int(inp[-1])
            if count % 10 == 0:
                print("File size: {}".format(n))
                for code in sorted(status):
                    if status[code] != 0:
                        print("{}: {}".format(code, status[code]))
                count = 0
    except KeyboardInterrupt:
        print("File size: {}".format(n))
        for code in sorted(status):
            if status[code] != 0:
                print("{}: {}".format(code, status[code]))
        raise
    finally:
        print("File size: {}".format(n))
        for code in sorted(status):
            if status[code] != 0:
                print("{}: {}".format(code, status[code]))
