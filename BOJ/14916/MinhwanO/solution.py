n = int(input())
try: print(int(min(list(filter(lambda x: x > 0, map(lambda x: x + (n-5*x)/2 if (n-5*x)%2 == 0 else -1, range(int(n/5), -1, -1)))))))
except: print(-1)