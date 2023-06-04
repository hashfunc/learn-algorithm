int solution(int n) {
  int answer = 0;

  for (int base = 100000000; base > 0; base /= 10) {
	if (base <= n) {
	  int target = n / base;
	  answer += target;
	  n -= (target * base);
	}
  }

  return answer;
}
