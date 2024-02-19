def max_gift_value_dp(a, n, k):
	dp = [0] * (n + 1)
	dp[0] = a[0]

	for i in range(1, n + 1):
		max_value = 0
		for j in range(1, min(k + 1, i + 1)):
			sum = dp[i - j] + sum(a[i - j:i])
			max_value = max(max_value, sum)
		dp[i] = max_value

	return dp[n]

# Ví dụ
a = [6, 9, 1, -3, 5]
n = len(a)
k = 1

result = max_gift_value_dp(a, n, k)
print(f"Tổng giá trị quà lớn nhất: {result}")
